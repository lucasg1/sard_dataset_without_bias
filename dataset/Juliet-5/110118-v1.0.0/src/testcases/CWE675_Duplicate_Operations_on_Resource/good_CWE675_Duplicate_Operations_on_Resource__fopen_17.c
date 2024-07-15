void FUN0()
{
    int i,k;
    FILE * data;
    data = NULL; 
    for(i = 0; i < 1; i++)
    {
        data = fopen("BadSource_fopen.txt", "w+");
        fclose(data);
    }
    for(k = 0; k < 1; k++)
    {
        ; 
    }
}
void FUN1()
{
    int h,j;
    FILE * data;
    data = NULL; 
    for(h = 0; h < 1; h++)
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    for(j = 0; j < 1; j++)
    {
        fclose(data);
    }
}
