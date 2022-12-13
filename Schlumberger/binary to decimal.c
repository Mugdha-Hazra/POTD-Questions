void toBinary(int n)
{
    if(n==0) return;
    toBinary(n/2);
    printf("%d",n%2);
        
}
