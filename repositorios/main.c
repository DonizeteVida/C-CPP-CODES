#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char* version;
}AppVersion;

int main(int argc, char const *argv[])
{
    AppVersion** versions = malloc(sizeof(AppVersion) * 100);

    AppVersion version;
    version.version = "Donizete\n";

    *versions = &version;

    printf("%s", (versions[0])->version);

    return 0;
}
