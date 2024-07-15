static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    FILE * data;
    data = NULL; 
    if(STATIC_CONST_FIVE==5)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN1()
{
    FILE * data;
    data = NULL; 
    if(STATIC_CONST_FIVE==5)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(STATIC_CONST_FIVE==5)
    {
        ; 
    }
}
void FUN2()
{
    FILE * data;
    data = NULL; 
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    if(STATIC_CONST_FIVE==5)
    {
        fclose(data);
    }
}
void FUN3()
{
    FILE * data;
    data = NULL; 
    if(STATIC_CONST_FIVE==5)
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    if(STATIC_CONST_FIVE==5)
    {
        fclose(data);
    }
}
