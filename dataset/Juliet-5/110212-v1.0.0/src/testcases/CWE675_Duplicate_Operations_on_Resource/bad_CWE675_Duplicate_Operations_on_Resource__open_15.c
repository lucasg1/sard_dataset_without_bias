void FUN0()
{
    int data;
    data = -1; 
    switch(6)
    {
    case 6:
        data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        CLOSE(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        CLOSE(data);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
