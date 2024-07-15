void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    switch(6)
    {
    case 6:
<START>
        fclose(data);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
