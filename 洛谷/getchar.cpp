#include <bits/stdc++.h>
// int main(){
//     int len = 0;
//     while(getchar() != '\n'){
//         len++;
//     }
//     printf("%d", len);
//     return 0;
// }


// int main(){
//     int ch = 0;
//     while((ch = getchar()) != EOF){
//         putchar(ch);
//     }
//     return 0;
// }

// int main(){
//     int ch = 0;
//     while((ch = getchar()) == ' '){
//         ;
//     }
//     printf("%c", ch);
//     return 0;
// }

// int main(){
//    int ch;
//    ch=getchar();
//    putchar(ch);
//     return 0;
// }

int main(){
    int ch = 0;
    char password[20] = {0};
    printf("Please enter your password: ");
    scanf("%s", password);
    while(getchar() != '\n'){
        ;
    }
    printf("请确认您的密码(Y or N): ");
    ch = getchar();
    if(ch == 'Y'){
        printf("确认成功\n");
    }else{
        printf("确认失败\n");
    }

    return 0;



}

