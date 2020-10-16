#include "b2e.h"

void rwFile(std::string in, std::string out)
{
  std::ifstream input(in);
  std::ofstream output(out);
  std::string line;

  output << "int main(){system(\"";
  while (getline(input, line))
  {
    output << line << " && ";
  }

  output << "rem\");}" << std::endl;
  input.close();
  output.close();
}

inline bool fileExists(const std::string &file)
{
  std::ifstream f(file.c_str());
  return f.good();
}

int main(int argc, char *argv[])
{
  HANDLE cstdout = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
  GetConsoleScreenBufferInfo(cstdout, &consoleInfo);
  WORD saved = consoleInfo.wAttributes;

  if (argc == 1)
  {
    printf("b2e: ");
    SetConsoleTextAttribute(cstdout, (FOREGROUND_RED));
    printf("fatal error: ");
    SetConsoleTextAttribute(cstdout, saved);
    printf("no files");
    SetConsoleTextAttribute(cstdout, (FOREGROUND_INTENSITY));
    printf("\nusage: b2e <bat> <out>");
    SetConsoleTextAttribute(cstdout, saved);
    return 0;
  }
  std::string p1(argv[1]);
  std::string p2(argv[1]);

  p1 += ".bat";
  if (argc > 2)
  {
    p2 = argv[2];
    p2 += (char*)".c";
  }
  else
    p2 = p1 + ".c";

  rwFile(p1, p2);
  
  while (true)
  {
    if (fileExists)
    {
      std::string c = compile(p2);
      system(c.c_str());
      return 0;
    }
  }
}