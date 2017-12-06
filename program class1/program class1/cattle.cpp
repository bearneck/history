extern int n;
long cattle(int n)
{
	if (n <= 0)
		return 0;
	if (n <= 3)
		return 1;
	return cattle(n - 1) + cattle(n - 3);

}