int main (){
    int num;
    printf("enter the num:");
    scanf("%d", &num);
    if (num >=1 && num <= 9){
        printf("equivalent char:%c\n",num +'0');
    }
    else{
        printf("the num is invalid \n");
    }
    return 0;
}
