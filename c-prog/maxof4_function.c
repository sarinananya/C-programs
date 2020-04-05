#include <stdio.h>
//function prototype
int max_of_four(int a, int b, int c, int d);
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
//function definition
int max_of_four(int a, int b, int c, int d){
    int ans;
    ans=a;
    if(ans<=b){
        ans=b;
    }
    if(ans<=c){
        ans=c;
    }
    if(ans<=d){
        ans=d;
    }
    return ans;
}

