#include "checker.h"

int		check_dup(int argc, char **argv, int i)
{
	int j;

	j = 2;
	if (argc > 2)
	{
		while (i < argc)
		{
			while (argv[j])
			{
				if (ft_strcmp(argv[i], argv[j]) == 0)
					return (0);
				j++;
			}
			i++;
			j = i + 1;
		}
	}
	return (1);
}
int		check_digit(int argc, char **argv, int i)
{
	int j;

	j = 0;
	while (i < argc)
	{
		if (argv[i][0] == '-')
			j++;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int		intiger_check(int a, int a1)
{
	if (a > a1)
		return (1);
	else if (a == a1)
		return (0);
	return (-1);
}

int		Max(char *str)
{
	char	*Max;
	int		i;

	Max = "2147483647";
	i = 0;
	while (str[i])
	{
		if (str[0] == '-')
			return (1);
		else if (intiger_check(Max[i], str[i]) == -1)
			return (0);
		else if (intiger_check(Max[i], str[i]) == 1)
			return (1);
		i++;
	}
	return (1);
}

int		Min(char *str)
{
	char	*Min;
	int		i;

	Min = "-2147483648";
	i = 0;
	while (str[i])
	{
		if (str[0] != '-')
			return (0);
		else if (intiger_check(Min[i], str[i]) == -1)
			return (0);
		else if (intiger_check(Min[i], str[i]) == 1)
			return (1);
		i++;
	}
	return (1);
}

int		int_size_check(int argc, char **argv, int i)
{
    while (i < argc)
	{
		if (ft_strlen(argv[i]) == 10)
		{
			if (Max(argv[i]) == 0)
				return (0);
		}
		else if (ft_strlen(argv[i]) == 11)
		{
			if (Min(argv[i]) == 0)
				return (0);
		}
		else if (ft_strlen(argv[i]) > 11)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int check_stack(int argc, char **argv, int i)
{
	if(check_digit(argc,argv,i))
    {
		if(check_dup(argc,argv,i))
		{
			if(int_size_check(argc,argv,i))
            {
                return(1);
            }
        }
    }
	return(0);
}

int both_stacks_check1(int argc, char **argv)
{
	int g;
	
	g = check_stack(argc, argv, 1);
	return(g);
}

int both_stacks_check(int argc, char **argv)
{
	int g;

	if((g = both_stacks_check1(argc, argv)) == 0)
		ft_putstr("Error");
	return(g);
}