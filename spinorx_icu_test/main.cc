// public domain

#include <iostream>
#include <string>

#include <unicode/unistr.h>
#include <unicode/ustream.h>

int main(int argc, char** argv) {
  icu::UnicodeString str = icu::UnicodeString::fromUTF8(
      "HellO Αα Ββ Γγ Δδ Εε Ζζ  Ηη Θθ Ιι Κκ Λλ Μμ "
      "Νν Ξξ Οο Ππ Ρρ Σσς Ττ Υυ Φφ Χχ Ψψ Ωω "
      "Aa Ää Bb Cc Dd Ee Ff Gg Hh Ii Jj Kk Ll Mm Nn "
      "Oo Öö Pp Qq Rr Ss ß  Tt Uu Üü Vv Ww Xx Yy Zz");
  std::string stdstr;
  str.toLower().toUTF8String(stdstr);
  std::cout << stdstr << std::endl;
  std::cout << str << std::endl;
}
