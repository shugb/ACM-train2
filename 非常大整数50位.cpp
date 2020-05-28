#define LOCAL
#include<iostream>
#include<cstdio>
#include<cmath>
#define INF 10000000000
#include<cstring>
#include<algorithm>
#include <iomanip>
#include<stack>
#define LL long long
using namespace std;
const int N=51;
class VeryLongInt
{
public:
       VeryLongInt();
	   VeryLongInt(const char *str);
       VeryLongInt(const VeryLongInt &v);
       VeryLongInt &operator = (const VeryLongInt &v);
       const char *c_str();
       VeryLongInt &operator+=(const VeryLongInt &v);
       VeryLongInt &operator-=(const VeryLongInt &v);
       VeryLongInt &operator*=(const VeryLongInt &v);
	   VeryLongInt &operator/=(const VeryLongInt &v);
	   VeryLongInt &operator%=(const VeryLongInt &v);
       VeryLongInt &operator++();
	   VeryLongInt operator++(int);
	   VeryLongInt &operator--();
	   VeryLongInt operator--(int);
	   	friend VeryLongInt abs(const VeryLongInt &x)
	   	{
	      if (!x.s[0])
		  return x;
	      else
	   {
		VeryLongInt tmp = x;
		tmp.s[0] = 0;
		return tmp;
	   }
      }
        bool VeryLongInt::operator ==(const VeryLongInt &v1)const;
        bool VeryLongInt::operator !=(const VeryLongInt &v1) const;
        bool VeryLongInt::operator >(const VeryLongInt &v1)const;
        bool VeryLongInt::operator >=(const VeryLongInt &v1)const;
        bool VeryLongInt::operator <(const VeryLongInt &v1)const;
        bool VeryLongInt::operator <=(const VeryLongInt &v1)const;
       friend VeryLongInt operator+(const VeryLongInt &v1, const VeryLongInt &v2);
	   friend VeryLongInt operator-(const VeryLongInt &v1, const VeryLongInt &v2);
	   friend VeryLongInt operator*(const VeryLongInt &v1, const VeryLongInt &v2);
	   friend VeryLongInt operator%(const VeryLongInt &v1, const VeryLongInt &v2);
	   friend VeryLongInt operator/(const VeryLongInt &left,const VeryLongInt &right);
       friend ostream& operator <<(ostream &out,const VeryLongInt &x);
       friend istream& operator >>(istream &in,VeryLongInt &v);
       int length() const
	{
		int i;
		for (i = N - 1; i > 0 && !s[i]; i--);
		return i;
	}
       char s[51];
       VeryLongInt divmod(const VeryLongInt &_right, VeryLongInt & mod)const;
};
VeryLongInt::VeryLongInt()
{
	for (int k = 0; k < N; k++)
		s[k] = 0;
}
VeryLongInt::VeryLongInt(const VeryLongInt & x)
{
	for (int i = 0; i < N; i++)
		s[i] = x.s[i];
}
VeryLongInt::VeryLongInt(const char * str)
{
	int i, j, k;
	s[0] = 0;
	for (i = 0; str[i] == ' ' || str[i] == '\t' || str[i] == '0'; i++)
		;
	if (str[i] == '-')
	{
		i++;
		s[0] = 1;
	}
	else if (str[i] == '+')
		i++;
	for (; str[i] == ' ' || str[i] == '\t' || str[i] == '0'; i++)
		;
	for (j = i; str[j]; j++)
		;
	for (k = 1, j--; k < N && j >= i; j--)
	{
		if (str[j] >= '0' && str[j] <= '9')
			s[k++] = str[j] - '0';
	}
	for (; k < N; k++)
		s[k] = 0;
}

bool VeryLongInt::operator==(const VeryLongInt & v) const
{
	for (int i = 0; i < N; i++)
		if (s[i] != v.s[i])
		{
			return false;
		}
	return true;
}
bool VeryLongInt::operator>(const VeryLongInt & r) const
{
	if (*this == r || *this < r)
		return false;
	return true;
}
bool VeryLongInt::operator>=(const VeryLongInt & r) const
{
	if (*this > r || *this == r)
		return true;
	return false;
}
bool VeryLongInt::operator<(const VeryLongInt & r) const
{
	const VeryLongInt &l = *this;
	if (l == r)
		return false;

	if (l.s[0] && !r.s[0])
		return true;
	else if (!l.s[0] && r.s[0])
		return false;
	else
	{
		int i, j;
		for (i = N - 1; i > 0 && !l.s[i]; i--)
			;
		for (j = N - 1; j > 0 && !r.s[j]; j--)
			;
		if (i < j)
			return (!l.s[0]) ? true : false;
		else if (i > j)
			return (!l.s[0]) ? false : true;
		else
		{
			for (int k = i; k > 0; k--)
			{
				if (l.s[k] < r.s[k])
					return (!l.s[0]) ? true : false;
				else if (l.s[k] > r.s[k])
					return (!l.s[0]) ? false : true;
			}
		}
	}
	return false;
}
bool VeryLongInt::operator<=(const VeryLongInt & r) const
{
	if (*this < r || *this == r)
		return true;
	return false;
}

VeryLongInt operator-(const VeryLongInt & x)
{
	VeryLongInt tmp = x;
	tmp.s[0] = !tmp.s[0];
	return tmp;
}
ostream & operator<<(ostream & out, const VeryLongInt & x)
{
	int i;
	for (i = N - 1; i >= 1 && x.s[i] == 0; i--)
		;
	if (i == 0)
	{
		out << 0;
		return out;
	}
	if (x.s[0])out << "-";
	for (; i > 0; i--)
		out << (int)x.s[i];
	return out;
}
istream & operator >> (istream & in, VeryLongInt & x)
{
	string str;
	in >> str;
		x = VeryLongInt();
	return in;
}
VeryLongInt & VeryLongInt::operator=(const VeryLongInt & x)
{
	for (int i = 0; i < N; i++)
		s[i] = x.s[i];
	return *this;
}

VeryLongInt operator+(const VeryLongInt &left, const VeryLongInt &right)
{
	const char *l, *r;
	if (abs(left) > abs(right))
	{
		l = left.s;
		r = right.s;
	}
	else
	{
		l = right.s;
		r = left.s;
	}
	VeryLongInt _tmp;
	char *tmp = _tmp.s;

	if (l[0] == r[0])
	{
		tmp[0] = l[0];
		for (int i = 1; i < N; i++)
			tmp[i] = l[i] + r[i];
		for (int i = 1; i < N; i++)
			if (tmp[i] > 9)
			{
				tmp[i + 1] += tmp[i] / 10;
				tmp[i] %= 10;
			}
	}
	else
	{
		tmp[0] = l[0];
		for (int i = 1; i < N; i++)
		{
			tmp[i] += l[i] - r[i];
			if (tmp[i] < 0)
			{
				tmp[i] = (tmp[i] % 10 + 10) % 10;
				tmp[i + 1]--;
			}
		}
	}
	return _tmp;

}
VeryLongInt operator-(const VeryLongInt &left, const VeryLongInt &right)
{
	return left + (-right);
}
VeryLongInt operator*(const VeryLongInt & left, const VeryLongInt & right)
{
	if (!left.length() || !right.length())
		return "0";
	const char *l, *r;
	if (abs(left) > abs(right))
	{
		l = left.s;
		r = right.s;
	}
	else
	{
		l = right.s;
		r = left.s;
	}
	int i, j;
	VeryLongInt ret;
	int tmp[N];
	tmp[0] = l[0] != r[0] ? 1 : 0;
	for (int k = 1; k < N; k++)
		tmp[k] = 0;
	for (i = N - 1; !l[i]; i--);
	for (j = N - 1; !r[j]; j--);
	for (int m = 1; m <= i; m++)
	{
		for (int n = 1; n <= j; n++)
		{
			tmp[m + n - 2 + 1] += l[m] * r[n];
		}
	}
	for (int k = 2; k < N; k++)
	{
		tmp[k] += tmp[k - 1] / 10;
		tmp[k - 1] %= 10;
	}
	for (int k = 0; k < N; k++)
		ret.s[k] = tmp[k];
	return ret;
}

VeryLongInt VeryLongInt::divmod(const VeryLongInt &_right, VeryLongInt & mod)const
{
	if (!_right.length())
		throw 0;
	const int sign = this->s[0] != _right.s[0] ? 1 : 0;
	VeryLongInt left = abs(*this);
	VeryLongInt right = abs(_right);
	if (left < right)
		return "0";
	int lenl = left.length();
	int lenr = right.length();
	char K[51] = "1";
	VeryLongInt *tmp = new VeryLongInt[lenl - lenr + 1];
	tmp[0] = right;
	for (int i = 1; i < lenl - lenr + 1; i++)
	{
		K[i] = '0';
		K[i + 1] = 0;
		tmp[i] = right * K;
	}
	int cnt = lenl - lenr + 1, digit = 0;
	stack<int> st;
	while (cnt)
	{
		if (left < tmp[cnt - 1])
		{
			st.push(digit);
			digit = 0;
			cnt--;
			continue;
		}
		left -= tmp[cnt - 1];
		digit++;
	}
	mod = left;
	VeryLongInt ret;
	ret.s[0] = sign;
	int k = 1;
	while (!st.empty())
	{
		ret.s[k++] = st.top();
		st.pop();
	}
	delete[] tmp;
	return ret;
}
VeryLongInt operator/(const VeryLongInt &left,const VeryLongInt &right)
{
	VeryLongInt mod;
	return left.divmod(right, mod);
}
VeryLongInt operator%(const VeryLongInt & left, const VeryLongInt & right)
{
	VeryLongInt mod;
	left.divmod(right, mod);
	return mod;
}

VeryLongInt & VeryLongInt::operator+=(const VeryLongInt & x)
{
	*this = *this + x;
	return *this;
}
VeryLongInt & VeryLongInt::operator-=(const VeryLongInt & x)
{
	*this = *this - x;
	return *this;
}
VeryLongInt & VeryLongInt::operator*=(const VeryLongInt & x)
{
	*this = *this*x;
	return *this;
}
VeryLongInt & VeryLongInt::operator/=(const VeryLongInt & x)
{
	if (!x.length())
		throw 0;
	*this = *this / x;
	return *this;
}
VeryLongInt & VeryLongInt::operator%=(const VeryLongInt & x)
{
	if (!x.length())
		throw 0;
	*this = *this%x;
	return *this;
}
VeryLongInt & VeryLongInt::operator++()
{
	*this->s = *this->s + 1;
	return *this;
}
VeryLongInt VeryLongInt::operator++(int)
{
	VeryLongInt tmp = *this;
	++*this;
	return tmp;
}
VeryLongInt & VeryLongInt::operator--()
{
	*this->s = *this->s- 1;
	return *this;
}
VeryLongInt VeryLongInt::operator--(int)
{
	VeryLongInt tmp = *this;
	--*this;
	return *this;
}

int main()
{
  VeryLongInt a,b;
  while(cin>>a>>b)
 {
cout<<a-b<<endl;  }
return 0;
}
