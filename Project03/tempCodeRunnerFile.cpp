short n;
    char ch;
    printf("정수를 입력하세요:");
    scanf("%hd", &n);
    printf("%s\n", n % 2 ? "홀수" : "짝수");