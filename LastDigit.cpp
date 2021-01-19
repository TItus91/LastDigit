#include <string>

int last_digit(const std::string& str1, const std::string& str2) {
  
  if ((str2.begin() != --str2.end()) || *str2.begin() - 48 != 0)
  {
    switch ((*--str1.end()) - 48)
    {
    case 0: return 0; 
    case 1: return 1;
    case 2:
    {
      int LastTwoDig;
      if (str2.begin() != --str2.end()) LastTwoDig = (*--str2.end() - 48 + (*(-2 + str2.end()) - 48) * 10);
      else LastTwoDig = (*--str2.end() - 48);
      switch (LastTwoDig % 4)
      {
      case 0: return 6;
      case 1: return 2;
      case 2: return 4;
      case 3: return 8;
      }
    }
    case 3:
    {
      int LastTwoDig;
      if (str2.begin() != --str2.end()) LastTwoDig = (*--str2.end() - 48 + (*(-2 + str2.end()) - 48) * 10);
      else LastTwoDig = (*--str2.end() - 48);
      switch (LastTwoDig % 4)
      {
      case 0: return 1;
      case 1: return 3;
      case 2: return 9;
      case 3: return 7;
      }
    }
    case 4:
    {
      int LastDig = (*--str2.end() - 48);
      switch (LastDig % 2)
      {
      case 0: return 6;
      case 1: return 4;
      }
    }
    case 5: return 5;
    case 6: return 6;
    case 7:
    {
      int LastTwoDig;
      if (str2.begin() != --str2.end()) LastTwoDig = (*--str2.end() - 48 + (*(-2 + str2.end()) - 48) * 10);
      else LastTwoDig = (*--str2.end() - 48);
      switch (LastTwoDig % 4)
      {
      case 0: return 1;
      case 1: return 7;
      case 2: return 9;
      case 3: return 3;
      }
    }
    case 8:
    {
      int LastTwoDig;
      if (str2.begin() != --str2.end()) LastTwoDig = (*--str2.end() - 48 + (*(-2 + str2.end()) - 48) * 10);
      else LastTwoDig = (*--str2.end() - 48);
      switch (LastTwoDig % 4)
      {
      case 0: return 6;
      case 1: return 8;
      case 2: return 4;
      case 3: return 2;
      }
    }
    case 9:
    {
      int LastDig = (*--str2.end() - 48);
      switch (LastDig % 2)
      {
      case 0: return 1;
      case 1: return 9;
      }
    }
    }
  }
  else return 1;
}
