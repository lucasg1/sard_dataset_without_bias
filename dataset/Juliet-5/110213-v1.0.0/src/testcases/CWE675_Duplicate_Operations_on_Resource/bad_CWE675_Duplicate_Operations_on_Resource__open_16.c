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
<START>
        CLOSE(data);
<END>
        break;
    }
}
