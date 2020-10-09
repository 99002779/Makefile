int main()
{
    int n;

    printf("\n1.Addition");
    printf("\n2.subtraction");
    printf("\n Select Operation");
 scanf("\n%d",&n);
 switch(n)
 {
    case 1: addition();
                      break;

    case 2: subtraction();
                      break;

     default : exit(0);
                break;

}
return 0;
}
