void FUN0()
{
    int data;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    if(globalReturnsTrue())
    {
        if (data != -1)
        {
<START>
            fclose((FILE *)data);
<END>
        }
    }
}
