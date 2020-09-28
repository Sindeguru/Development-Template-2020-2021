#ifndef INCLUDE_PAIR_H_
#define INCLUDE_PAIR_H_

template <class T1, class T2>
class TPair {
	T1 first;
	T2 second;
public: 
	TPair(T1 f, T2 s);
	T1 getFirst();
	T2 getSecond();
	void setFirst(T1 f);
	void setSecond(T2 s);

	void swap(TPair& t);
	bool operator > (const TPair& t);
	bool operator < (const TPair& t);
	bool operator == (const TPair& t);
	bool operator != (const TPair& t);
	TPair& operator= (const TPair& t);
};

template <class T1, class T2>
TPair<T1, T2>::TPair(T1 f, T2 s)
{
	first = f;
	second = s;
}
template <class T1, class T2>
T1 TPair<T1, T2>::getFirst()
{
	return first;
}
template <class T1, class T2>
T2 TPair<T1, T2>::getSecond()
{
	return second;
}
template <class T1, class T2>
void TPair<T1, T2>::setFirst(T1 f)
{
	first = f;
}
template <class T1, class T2>
void TPair<T1, T2>::setSecond(T2 s)
{
	second = s;
}
template <class T1, class T2>
void TPair<T1, T2>::swap(TPair& t)
{
	T1 a = this->first;
	T2 b = this->second;
	this->first = t.first;
	this->second = t.second;
	t.first = a;
	t.second = b;
}
template <class T1, class T2>
bool TPair<T1, T2>::operator > (const TPair& t)
{
	if (this->first > t.first)
		return 1;
	else if ((this->first == t.first)&&(this->second > t.second))
			return 1;
	return 0;
}
template <class T1, class T2>
bool TPair<T1, T2>::operator < (const TPair& t)
{
	if (this->first < t.first)
		return 1;
	else if ((this->first == t.first) && (this->second < t.second))
		return 1;
	return 0;
}
template <class T1, class T2>
bool TPair<T1, T2>::operator == (const TPair& t)
{
	if ((this->first == t.first) && (this->second == t.second))
		return 1;
	else return 0;
}
template <class T1, class T2>
bool TPair<T1, T2>::operator != (const TPair& t)
{
	if ((this->first != t.first) || (this->second != t.second))
		return 1;
	else return 0;
}

template<class T1, class T2>
inline TPair<T1, T2>& TPair<T1, T2>::operator=(const TPair& t)
{
	this->first = t.first;
	this->second = t.second;
	return *this;
}

#endif  // INCLUDE_PAIR_H_