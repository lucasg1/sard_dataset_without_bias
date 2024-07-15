void FUN0()
{
    int data;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    switch(6)
    {
    case 6:
        if (data != -1)
        {
<START>
            fclose((FILE *)data);
<END>
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
