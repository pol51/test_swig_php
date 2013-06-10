double _value = 3.0;

double value()
{
  return _value;
}

void setValue(double v)
{
  _value = v;
}

int fact(int n)
{
  if (n <= 1) return 1;
  else return n*fact(n-1);
}

int mod(int n, int m)
{
	return(n % m);
}
