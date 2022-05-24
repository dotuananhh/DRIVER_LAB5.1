#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>

#define MEM_SIZE 1024


int main() {
    int fd = open("/dev/lab5_2_nguyen_van_duy", O_RDWR);
    if (fd == -1) {
        printf("khong mo dc file\n");
        exit(0);
    }
    char buffer[MEM_SIZE];
    while (1) {
        system("clear");
        printf("1. tuong doi\n");
        printf("2. dong thiet bi va ket thuc ctr\n");

        int choose;
        scanf("%d", &choose);

        switch (choose) {
            case 1:
                write(fd, "relative", sizeof("relative"));
                read(fd, buffer, sizeof(buffer));
                printf("%s\n", buffer);
                getchar();
                getchar();
                break;
            case 2:
                exit(0);
                break;
            default:
                break;
        }
    }
    
    return 0;
}
