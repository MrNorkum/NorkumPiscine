#include <unistd.h>
int main(int argc, char **argv)
{
	int	i, j;
	int	ascii[256] = {0};
	if (argc == 3)
	{
		for(i = 0; argv[1][i]; i++)
		{
			if (!ascii[(int)argv[1][i]])
			{
				for (j = 0; argv[2][j]; j++)
				{
					if (argv[1][i] == argv[2][j])
					{
						ascii[(int)argv[1][i]] = 1;
						write(1, &argv[1][i], 1);
						break;
					}
				}
			}
		}
	}
	write(1, "\n", 1);
}
