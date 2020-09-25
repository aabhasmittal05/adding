int sum(int);
main()
{
	int x;
	printf("enter a number");
	scanf("%d", &x);
	printf("sum is %d",sum(x));
	getch();
	}
	int sum(int x)
	{ 
	 if(x/10==0)
	 return(x);
	 return(x%10+sum(x/10));

	}
