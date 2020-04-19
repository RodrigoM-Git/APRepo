#include <iostream>
#include <string>

int main(void){

    std::string output = "";

    //A
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < i; j++){
            output += "* ";
        }
        output += "\n";
    }

    //B
    for(int y = 0; y < 7; y++)
	{
                for(int s = 0; s<7-y; s++)
                        output += "  ";

        	for(int x = 1; x <= y; x++)
		{
			output += "* ";
		}
		output += "\n";
	}

    //C
    for(int i = 1, k = 0; i <= 7; ++i, k = 0)
    {
        for(int j = 1; j <= 7-i; j++)
        {
            output += "  ";
        }

        while(k != 2*i-1)
        {
            output += "* ";
            k++;
        }
        output += "\n";
    }    

    //D
    int space = 6;
    for (int k=1; k<=7; k++) {
	    for(int c=1; c<=space; c++) {
		    output += " ";
	    }
	    space--;
	    for(int c=1; c<=(2*k-1); c++) {
	    	output += "*";
	    }
	    output += "\n";
    }

    space=1;
    for(int k=1; k<=6; k++) {
	    for(int c=1; c<=space; c++) {
	    	output += " ";
	    }
	    space++;
	    for(int c=1 ; c<=(2*(7-k)-1); c++) {
		    output += "*" ;
    	}
	    output += "\n";
    }

    std::cout << output << std::endl;
    return EXIT_SUCCESS;
}