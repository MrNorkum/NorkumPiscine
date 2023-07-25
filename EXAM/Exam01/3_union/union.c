#include <unistd.h>
int main(int argc, char **argv)
{
    int i;
    int discovered[256] = {0};
    int printed[256] = {0};
    if (argc == 3)
    {
        for (i = 1; i < 3; i++)
        {
            for (int j = 0; argv[i][j]; j++)
            {
                if (!printed[(int)argv[i][j]] && (i == 2 || discovered[(int)argv[i][j]]++))
                {
                    write(1, &argv[i][j], 1);
                    printed[(int)argv[i][j]] = 1;
                }
            }
        }
    }
    write(1, "\n", 1);
}
