void FUN0()
{
    int j;
    int data;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    for(j = 0; j < 1; j++)
    {
<START>
        data = OPEN("BadSink_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
<END>
        if (data != -1)
        {
            CLOSE(data);
        }
    }
}
