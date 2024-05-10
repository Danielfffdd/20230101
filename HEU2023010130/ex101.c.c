#include <stdio.h>
int isPalindrome(int num) {
    int reversedNum = 0;
    int originalNum = num;
    while(num> 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    if(originalNum == reversedNum) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int i=0;
	int n;
    scanf("%d", &n);
    
    int count = 0; 
    
    for(i=0;i<=n;i++){
        if(isPalindrome(i)) {
            printf("%d,", i);
            count++;
            if(count % 10 == 0) {  
                printf("\n");
            }
        }
    }
    
    return 0;
}

	
	
	
	
	
	
	




