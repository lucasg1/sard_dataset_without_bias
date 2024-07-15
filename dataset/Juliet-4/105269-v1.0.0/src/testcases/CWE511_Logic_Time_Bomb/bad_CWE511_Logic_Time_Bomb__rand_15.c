void FUN0()
{
    switch(6)
    {
    case 6:
        srand((unsigned)time(NULL));
        if (rand() == NUM_CHECK)
        {
<START>
            UNLINK("important_file.txt");
<END>
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
