void FUN0()
{
    int data;
    data = -1; 
    if(globalReturnsTrueOrFalse())
    {
        data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        CLOSE(data);
    }
    else
    {
        data = OPEN("GoodSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        CLOSE(data);
<END>
    }
    else
    {
        ; 
    }
}
