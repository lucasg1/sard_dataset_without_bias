void FUN0()
{
    int data;
    data = -1; 
    while(1)
    {
        data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        CLOSE(data);
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
    int data;
    data = -1; 
    while(1)
    {
        data = OPEN("GoodSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        break;
    }
    while(1)
    {
        CLOSE(data);
        break;
    }
}
