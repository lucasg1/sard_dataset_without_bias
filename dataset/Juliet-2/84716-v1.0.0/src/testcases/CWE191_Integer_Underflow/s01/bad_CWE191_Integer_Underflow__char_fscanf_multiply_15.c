void FUN0()
{
    char data;
    data = ' ';
    switch(6)
    {
    case 6:
        fscanf (stdin, "%c", &data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        if(data < 0) 
        {
<START>
            char result = data * 2;
<END>
            printHexCharLine(result);
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
