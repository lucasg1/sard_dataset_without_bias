void FUN0()
{
    int data;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    if(globalFive==5)
    {
        if (data != -1)
        {
<START>
            fclose((FILE *)data);
<END>
        }
    }
}
