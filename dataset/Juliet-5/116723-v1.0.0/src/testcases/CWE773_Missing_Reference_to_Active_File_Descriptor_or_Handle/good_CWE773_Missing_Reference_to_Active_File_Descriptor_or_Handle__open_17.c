void FUN0()
{
    int k;
    int data;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    for(k = 0; k < 1; k++)
    {
        if (data != -1)
        {
            CLOSE(data);
        }
        data = OPEN("GoodSink_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        if (data != -1)
        {
            CLOSE(data);
        }
    }
}
