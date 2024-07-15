void FUN0()
{
    int data;
    data = -1; 
    if(globalTrue)
    {
        data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        CLOSE(data);
    }
    if(globalTrue)
    {
<START>
        CLOSE(data);
<END>
    }
}
