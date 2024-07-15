void FUN0()
{
    FILE * data;
    data = NULL; 
    while(1)
    {
        data = fopen("BadSource_fopen.txt", "w+");
        fclose(data);
        break;
    }
    while(1)
    {
        ; 
        break;
    }
}
void FUN1()
{
    FILE * data;
    data = NULL; 
    while(1)
    {
        data = fopen("GoodSource_fopen.txt", "w+");
        break;
    }
    while(1)
    {
        fclose(data);
        break;
    }
}
