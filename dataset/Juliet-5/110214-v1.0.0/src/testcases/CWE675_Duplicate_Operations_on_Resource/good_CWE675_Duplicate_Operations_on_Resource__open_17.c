void FUN0()
{
    int i,k;
    int data;
    data = -1; 
    for(i = 0; i < 1; i++)
    {
        data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        CLOSE(data);
    }
    for(k = 0; k < 1; k++)
    {
        ; 
    }
}
void FUN1()
{
    int h,j;
    int data;
    data = -1; 
    for(h = 0; h < 1; h++)
    {
        data = OPEN("GoodSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    }
    for(j = 0; j < 1; j++)
    {
        CLOSE(data);
    }
}
