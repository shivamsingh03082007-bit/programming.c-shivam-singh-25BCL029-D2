#include<stdio.h>
int main()
{
    long long int bytes;
    double kb, mb, gb;

    // Input bytes from user
    printf("Enter size in bytes: ");
    scanf("%lld", &bytes);

    // Convert bytes to KB, MB, GB
    kb = bytes / 1024.0;
    mb = kb / 1024.0;
    gb = mb / 1024.0;

    // Display the results
    printf("Size in KB: %.2f KB\n", kb);
    printf("Size in MB: %.2f MB\n", mb);
    printf("Size in GB: %.2f GB\n", gb);

    return 0;
}