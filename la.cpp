#if defined(__linux__) || defined(__CYGWIN__) || defined(__MINGW32__) || defined(__GNUC__) || defined(__BORLANDC__)
#include <strings.h>
#define stricmp strcasecmp
#define strnicmp strncasecmp
#endif
#include <iostream>
#include <sstream>
#include <string>
#include <cstdio>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
 srand(time(NULL));
 bool output_random = false;
 bool use_lower = false;
 bool use_upper = false;
 int desired_uniques = 0;
 int min_uniques = 0;
 int slot1_start_at = 0;
 int slot1_stop_at = 0;
 bool starts_with_letter = false;
 bool make_next_start_at = false;
 bool make_next_stop_at = false;
 int make_next_start_at_cnt = 0;
 int make_next_stop_at_cnt = 0;
 unsigned long long int start_at = 0;
 unsigned long long int stop_at = 0;
 if (argc > 1) {
  for (int i=1;i<argc;++i) {
   if (stricmp(argv[i], "-random") == 0) { output_random = true; }
   if (stricmp(argv[i], "-lower") == 0) { use_lower = true; }
   if (stricmp(argv[i], "-upper") == 0) { use_upper = true; }
   if (stricmp(argv[i], "-1unique") == 0) { desired_uniques = 1; }
   if (stricmp(argv[i], "-2uniques") == 0) { desired_uniques = 2; }
   if (stricmp(argv[i], "-3uniques") == 0) { desired_uniques = 3; }
   if (stricmp(argv[i], "-4uniques") == 0) { desired_uniques = 4; }
   if (stricmp(argv[i], "-5uniques") == 0) { desired_uniques = 5; }
   if (stricmp(argv[i], "-6uniques") == 0) { desired_uniques = 6; }
   if (stricmp(argv[i], "-7uniques") == 0) { desired_uniques = 7; }
   if (stricmp(argv[i], "-8uniques") == 0) { desired_uniques = 8; }
   if (stricmp(argv[i], "-1minunique") == 0) { min_uniques = 1; }  if (stricmp(argv[i], "-minunique1") == 0) { min_uniques = 1; }  if (stricmp(argv[i], "-min1unique") == 0) { min_uniques = 1; }
   if (stricmp(argv[i], "-2minuniques") == 0) { min_uniques = 2; } if (stricmp(argv[i], "-minuniques2") == 0) { min_uniques = 2; } if (stricmp(argv[i], "-min2uniques") == 0) { min_uniques = 2; }
   if (stricmp(argv[i], "-3minuniques") == 0) { min_uniques = 3; } if (stricmp(argv[i], "-minuniques3") == 0) { min_uniques = 3; } if (stricmp(argv[i], "-min3uniques") == 0) { min_uniques = 3; }
   if (stricmp(argv[i], "-4minuniques") == 0) { min_uniques = 4; } if (stricmp(argv[i], "-minuniques4") == 0) { min_uniques = 4; } if (stricmp(argv[i], "-min4uniques") == 0) { min_uniques = 4; }
   if (stricmp(argv[i], "-5minuniques") == 0) { min_uniques = 5; } if (stricmp(argv[i], "-minuniques5") == 0) { min_uniques = 5; } if (stricmp(argv[i], "-min5uniques") == 0) { min_uniques = 5; }
   if (stricmp(argv[i], "-6minuniques") == 0) { min_uniques = 6; } if (stricmp(argv[i], "-minuniques6") == 0) { min_uniques = 6; } if (stricmp(argv[i], "-min6uniques") == 0) { min_uniques = 6; }
   if (stricmp(argv[i], "-7minuniques") == 0) { min_uniques = 7; } if (stricmp(argv[i], "-minuniques7") == 0) { min_uniques = 7; } if (stricmp(argv[i], "-min7uniques") == 0) { min_uniques = 7; }
   if (stricmp(argv[i], "-8minuniques") == 0) { min_uniques = 8; } if (stricmp(argv[i], "-minuniques8") == 0) { min_uniques = 8; } if (stricmp(argv[i], "-min8uniques") == 0) { min_uniques = 8; }
   if (stricmp(argv[i], "-startswithA") == 0) { slot1_start_at = 0; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithB") == 0) { slot1_start_at = 1; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithC") == 0) { slot1_start_at = 2; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithD") == 0) { slot1_start_at = 3; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithE") == 0) { slot1_start_at = 4; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithF") == 0) { slot1_start_at = 5; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithG") == 0) { slot1_start_at = 6; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithH") == 0) { slot1_start_at = 7; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithJ") == 0) { slot1_start_at = 8; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithK") == 0) { slot1_start_at = 9; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithL") == 0) { slot1_start_at = 10; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithM") == 0) { slot1_start_at = 11; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithN") == 0) { slot1_start_at = 12; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithP") == 0) { slot1_start_at = 13; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithQ") == 0) { slot1_start_at = 14; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithR") == 0) { slot1_start_at = 15; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithS") == 0) { slot1_start_at = 16; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithT") == 0) { slot1_start_at = 17; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithU") == 0) { slot1_start_at = 18; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithV") == 0) { slot1_start_at = 19; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithW") == 0) { slot1_start_at = 20; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithX") == 0) { slot1_start_at = 21; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithY") == 0) { slot1_start_at = 22; starts_with_letter = true; }
   if (stricmp(argv[i], "-startswithZ") == 0) { slot1_start_at = 23; starts_with_letter = true; }
   if (stricmp(argv[i], "-start") == 0) { make_next_start_at = true; make_next_start_at_cnt = i; }
   if (stricmp(argv[i], "-stop") == 0) { make_next_stop_at = true; make_next_stop_at_cnt = i; }
   if ((make_next_start_at) && (i == (make_next_start_at_cnt+1))) { std::istringstream str_to_num(argv[i]); str_to_num >> start_at; if (!str_to_num) {std::cout << "ERROR: start is not a number" << std::endl; return 1;} make_next_start_at = false; }
   if ((make_next_stop_at) && (i == (make_next_stop_at_cnt+1))) { std::istringstream str_to_num(argv[i]); str_to_num >> stop_at; if (!str_to_num) {std::cout << "ERROR: stop is not a number" << std::endl; return 1;} make_next_stop_at = false; }
  }
 }
 if ((stop_at !=0) && (stop_at <= start_at)) { std::cout << "ERROR: stop must be greater than start" << std::endl; return 1; }

 const int MAX_LENGTH = 8;
 char alpha_chars[MAX_LENGTH+2];
 alpha_chars[MAX_LENGTH] = '\n';
 alpha_chars[MAX_LENGTH+1] = '\0';
 for (int i=0;i<MAX_LENGTH;++i) { alpha_chars[i] = 'a'; }
 char possible_chars[24] = {'a','b','c','d','e','f','g','h','j','k','l','m','n','p','q','r','s','t','u','v','w','x','y','z'};
 int possible_chars_freq[24] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
 int possible_chars_length = sizeof(possible_chars);
 if (use_lower) {for (int i=0;i<possible_chars_length;++i) { possible_chars[i] = tolower(possible_chars[i]); }}
 if (use_upper) {for (int i=0;i<possible_chars_length;++i) { possible_chars[i] = toupper(possible_chars[i]); }}
 int random_number = 0;
 int unique_count = 0;
 unsigned long long int counter = 0;
 unsigned long long int uniques_counter[MAX_LENGTH];
 for (int i=0;i<MAX_LENGTH;++i) { uniques_counter[i] = 0; }
 slot1_stop_at = possible_chars_length;
 if (starts_with_letter == true) { slot1_stop_at = slot1_start_at + 1; }

 // generate random combinations
 if (output_random) {
  for (unsigned long long int j=0;j<110075314176;++j) {
   possible_chars_freq[0]=possible_chars_freq[1]=possible_chars_freq[2]=possible_chars_freq[3]=possible_chars_freq[4]=possible_chars_freq[5]=possible_chars_freq[6]=possible_chars_freq[7]=possible_chars_freq[8]=possible_chars_freq[9]=possible_chars_freq[10]=possible_chars_freq[11]=possible_chars_freq[12]=possible_chars_freq[13]=possible_chars_freq[14]=possible_chars_freq[15]=possible_chars_freq[16]=possible_chars_freq[17]=possible_chars_freq[18]=possible_chars_freq[19]=possible_chars_freq[20]=possible_chars_freq[21]=possible_chars_freq[22]=possible_chars_freq[23]=0;
   for(int i=0;i<MAX_LENGTH;++i) {
    random_number = rand() % possible_chars_length;
    alpha_chars[i] = possible_chars[random_number];
    ++possible_chars_freq[random_number];
   }
   if ((possible_chars_freq[0]>4)||(possible_chars_freq[1]>4)||(possible_chars_freq[2]>4)||(possible_chars_freq[3]>4)||(possible_chars_freq[4]>4)||(possible_chars_freq[5]>4)||(possible_chars_freq[6]>4)||(possible_chars_freq[7]>4)||(possible_chars_freq[8]>4)||(possible_chars_freq[9]>4)||(possible_chars_freq[10]>4)||(possible_chars_freq[11]>4)||(possible_chars_freq[12]>4)||(possible_chars_freq[13]>4)||(possible_chars_freq[14]>4)||(possible_chars_freq[15]>4)||(possible_chars_freq[16]>4)||(possible_chars_freq[17]>4)||(possible_chars_freq[18]>4)||(possible_chars_freq[19]>4)||(possible_chars_freq[20]>4)||(possible_chars_freq[21]>4)||(possible_chars_freq[22]>4)||(possible_chars_freq[23]>4)) { continue; } // each character cannot appear more than 4 times
   unique_count = ((possible_chars_freq[0]!=0)?1:0) + ((possible_chars_freq[1]!=0)?1:0) + ((possible_chars_freq[2]!=0)?1:0) + ((possible_chars_freq[3]!=0)?1:0) + ((possible_chars_freq[4]!=0)?1:0) + ((possible_chars_freq[5]!=0)?1:0) + ((possible_chars_freq[6]!=0)?1:0) + ((possible_chars_freq[7]!=0)?1:0) + ((possible_chars_freq[8]!=0)?1:0) + ((possible_chars_freq[9]!=0)?1:0) + ((possible_chars_freq[10]!=0)?1:0) + ((possible_chars_freq[11]!=0)?1:0) + ((possible_chars_freq[12]!=0)?1:0) + ((possible_chars_freq[13]!=0)?1:0) + ((possible_chars_freq[14]!=0)?1:0) + ((possible_chars_freq[15]!=0)?1:0) + ((possible_chars_freq[16]!=0)?1:0) + ((possible_chars_freq[17]!=0)?1:0) + ((possible_chars_freq[18]!=0)?1:0) + ((possible_chars_freq[19]!=0)?1:0) + ((possible_chars_freq[20]!=0)?1:0) + ((possible_chars_freq[21]!=0)?1:0) + ((possible_chars_freq[22]!=0)?1:0) + ((possible_chars_freq[23]!=0)?1:0);
   if (unique_count >= 5) {
    if (((desired_uniques==0)&&(min_uniques==0)) || ((min_uniques>0)&&(unique_count>=min_uniques)) || ((desired_uniques>0)&&(desired_uniques==unique_count))) {
     std::cout << alpha_chars[0] << alpha_chars[1] << alpha_chars[2] << alpha_chars[3] << alpha_chars[4] << alpha_chars[5] << alpha_chars[6] << alpha_chars[7] << std::endl;
    }
   }
  }
 }
 // generate sequential combinations
 else {
 // ---------------------------------------------------
 // Number of combinations
 // ---------------------------------------------------
 //  # of combos (8-length) = 110,075,314,176 (24^8)
 //  # of combos (8-length) with rules = 47,210,528,543 (43%)
 //  # of combos (8-length) with rules (8 uniques): 12,642,994,978 (11.5%)
 //  # of combos (8-length) with rules (7 uniques): 21,433,514,842 (19.5%)
 //  # of combos (8-length) with rules (6 uniques): 11,122,891,428 (10.1%)
 //  # of combos (8-length) with rules (5 uniques): 2,011,127,295 (1.8%)

 // try known list first
 std::cout << "bfzswnjk" << std::endl;
 std::cout << "bsadcdsx" << std::endl;
 std::cout << "cbjfjuwv" << std::endl;
 std::cout << "chxdhgyn" << std::endl;
 std::cout << "eeaaqwmn" << std::endl;
 std::cout << "enkswtzc" << std::endl;
 std::cout << "epxcyqtt" << std::endl;
 std::cout << "ettfgpxy" << std::endl;
 std::cout << "fbsnzpuu" << std::endl;
 std::cout << "fqyqexcf" << std::endl;
 std::cout << "fyzcdszu" << std::endl;
 std::cout << "gkfxvnnk" << std::endl;
 std::cout << "gnazggfd" << std::endl;
 std::cout << "gpvakyhk" << std::endl;
 std::cout << "gttrqjte" << std::endl;
 std::cout << "hemvlpng" << std::endl;
 std::cout << "hhrgjubh" << std::endl;
 std::cout << "hsvfpnmk" << std::endl;
 std::cout << "hsvtpnmk" << std::endl;
 std::cout << "jckfhjtn" << std::endl;
 std::cout << "jktkhbmd" << std::endl;
 std::cout << "jkxgxtmq" << std::endl;
 std::cout << "jvstvxuw" << std::endl;
 std::cout << "kexnynex" << std::endl;
 std::cout << "kgwbjfcj" << std::endl;
 std::cout << "knuggefs" << std::endl;
 std::cout << "krccvrhs" << std::endl;
 std::cout << "kyyfrpey" << std::endl;
 std::cout << "labzfxvw" << std::endl;
 std::cout << "lpzwnwxj" << std::endl;
 std::cout << "lshfbqws" << std::endl;
 std::cout << "lyvgbaqb" << std::endl;
 std::cout << "mqdnxmdk" << std::endl;
 std::cout << "mzgzhpjb" << std::endl;
 std::cout << "ncbypana" << std::endl;
 std::cout << "nljkdrml" << std::endl;
 std::cout << "nlvuzzyk" << std::endl;
 std::cout << "nmxatcdm" << std::endl;
 std::cout << "nrjzxdpy" << std::endl;
 std::cout << "nwtlcspq" << std::endl;
 std::cout << "nybwgubw" << std::endl;
 std::cout << "pjjheyfd" << std::endl;
 std::cout << "ppfzdhup" << std::endl;
 std::cout << "ptbypwdb" << std::endl;
 std::cout << "puphmpnp" << std::endl;
 std::cout << "qfvqhuff" << std::endl;
 std::cout << "qfxknfma" << std::endl;
 std::cout << "qgfyzftp" << std::endl;
 std::cout << "qgzzapzb" << std::endl;
 std::cout << "rlrpfcuh" << std::endl;
 std::cout << "rtfnlzsp" << std::endl;
 std::cout << "rwaghhab" << std::endl;
 std::cout << "rzdtdlxc" << std::endl;
 std::cout << "schzglch" << std::endl;
 std::cout << "sclbsvtw" << std::endl;
 std::cout << "sunhxvsq" << std::endl;
 std::cout << "svrpzqqb" << std::endl;
 std::cout << "taytdkjv" << std::endl;
 std::cout << "tcrbxyke" << std::endl;
 std::cout << "tgztrcvc" << std::endl;
 std::cout << "ugafvgsk" << std::endl;
 std::cout << "urueuqky" << std::endl;
 std::cout << "uvsamser" << std::endl;
 std::cout << "vaackjhg" << std::endl;
 std::cout << "vgakargd" << std::endl;
 std::cout << "vtbnteyu" << std::endl;
 std::cout << "vtbnteyv" << std::endl;
 std::cout << "vycvnhcz" << std::endl;
 std::cout << "wfehweex" << std::endl;
 std::cout << "wheakaqx" << std::endl;
 std::cout << "whqyejhg" << std::endl;
 std::cout << "wqkgmfwy" << std::endl;
 std::cout << "wvnfpnxl" << std::endl;
 std::cout << "xbgzykhu" << std::endl;
 std::cout << "ycutewuk" << std::endl;
 std::cout << "ymvlzjbk" << std::endl;
 std::cout << "ywlcyrdl" << std::endl;
 std::cout << "zaxhvnbg" << std::endl;
 std::cout << "zbknxudp" << std::endl;
 std::cout << "zbulacrj" << std::endl;
 std::cout << "zfysgfse" << std::endl;
 std::cout << "zyvrhuzj" << std::endl;
 std::cout << "vhfdxlmt" << std::endl;

 for (int slot1=slot1_start_at;slot1<slot1_stop_at;slot1++) { // SLOT 1
  possible_chars_freq[0]=possible_chars_freq[1]=possible_chars_freq[2]=possible_chars_freq[3]=possible_chars_freq[4]=possible_chars_freq[5]=possible_chars_freq[6]=possible_chars_freq[7]=possible_chars_freq[8]=possible_chars_freq[9]=possible_chars_freq[10]=possible_chars_freq[11]=possible_chars_freq[12]=possible_chars_freq[13]=possible_chars_freq[14]=possible_chars_freq[15]=possible_chars_freq[16]=possible_chars_freq[17]=possible_chars_freq[18]=possible_chars_freq[19]=possible_chars_freq[20]=possible_chars_freq[21]=possible_chars_freq[22]=possible_chars_freq[23]=0;
  alpha_chars[0] = possible_chars[slot1];
  ++possible_chars_freq[slot1];

  for (int slot2=0;slot2<possible_chars_length;possible_chars_freq[slot2++]--) { // SLOT 2
   alpha_chars[1] = possible_chars[slot2];
   ++possible_chars_freq[slot2];

   //if (slot2==slot1) { continue; } // character 2 is not equal to character 1 (disproven - eeaaqwmn)
   //if (slot2==(slot1+1)) { continue; } // character 2 is not +1 to character 1 (disproven - uvsamser, jkxgxtmq)
   if (slot2==(slot1+2)) { continue; } // character 2 is not +2 to character 1
   if (slot2==(slot1+3)) { continue; } // character 2 is not +3 to character 1
   //if (slot2==(slot1+4)) { continue; } // character 2 is not +4 to character 1 (disproven - lpzwnwxj)
   if (slot2==(slot1+5)) { continue; } // character 2 is not +5 to character 1
   //if (slot2==(slot1-1)) { continue; } // character 2 is not -1 to character 1
   //if (slot2==(slot1-2)) { continue; } // character 2 is not -2 to character 1 (disproven)
   //if (slot2==(slot1-3)) { continue; } // character 2 is not -3 to character 1 (disproven - urueuqky)
   if (slot2==(slot1-4)) { continue; } // character 2 is not -4 to character 1
   //if (slot2==(slot1-5)) { continue; } // character 2 is not -5 to character 1 (disproven)

   for (int slot3=0;slot3<possible_chars_length;possible_chars_freq[slot3++]--) { // SLOT 3
    alpha_chars[2] = possible_chars[slot3];
    ++possible_chars_freq[slot3];
    if ((slot2==(slot1+1))&&(slot3==(slot2+1))) { continue; }       // no 3 characters in a row can be sequential
    if ((slot2==(slot1-1))&&(slot3==(slot2-1))) { continue; }       // no 3 characters in a row can be reverse sequential
    if ((slot3==slot2)&&(slot2==slot1)) { continue; }               // no 3 characters in a row can be identical

    //if (slot3==slot2) { continue; } // character 3 is not equal to character 2 (disproven - gttrqjte)
    //if (slot3==(slot2+1)) { continue; } // character 3 is not +1 to character 2 (disproven)
    if (slot3==(slot2+2)) { continue; } // character 3 is not +2 to character 2
    if (slot3==(slot2+3)) { continue; } // character 3 is not +3 to character 2
    if (slot3==(slot2+4)) { continue; } // character 3 is not +4 to character 2
    if (slot3==(slot2+5)) { continue; } // character 3 is not +5 to character 2
    //if (slot3==(slot2-1)) { continue; } // character 3 is not -1 to character 2 (disproven)
    if (slot3==(slot2-2)) { continue; } // character 3 is not -2 to character 2
    //if (slot3==(slot2-3)) { continue; } // character 3 is not -3 to character 2 (disproven - uvsamser)
    if (slot3==(slot2-4)) { continue; } // character 3 is not -4 to character 2
    if (slot3==(slot2-5)) { continue; } // character 3 is not -5 to character 2
    //if (slot3==slot1) { continue; } // character 3 is not equal to character 1 (disproven - urueuqky)
    //if (slot3==(slot1+1)) { continue; } // character 3 is not +1 to character 1 (disproven)
    if (slot3==(slot1+2)) { continue; } // character 3 is not +2 to character 1
    if (slot3==(slot1+3)) { continue; } // character 3 is not +3 to character 1
    if (slot3==(slot1+4)) { continue; } // character 3 is not +4 to character 1
    if (slot3==(slot1+5)) { continue; } // character 3 is not +5 to character 1
    if (slot3==(slot1-1)) { continue; } // character 3 is not -1 to character 1
    //if (slot3==(slot1-2)) { continue; } // character 3 is not -2 to character 1 (disproven)
    if (slot3==(slot1-3)) { continue; } // character 3 is not -3 to character 1
    if (slot3==(slot1-4)) { continue; } // character 3 is not -4 to character 1
    if (slot3==(slot1-5)) { continue; } // character 3 is not -5 to character 1

    for (int slot4=0;slot4<possible_chars_length;possible_chars_freq[slot4++]--) { // SLOT 4
     alpha_chars[3] = possible_chars[slot4];
     if (++possible_chars_freq[slot4] > 3) { continue; }            // each character cannot appear more than 3 times
     if ((slot1==slot3)&&(slot2==slot4)) { continue; }              // characters 1 and 3, and 2 and 4 are not identical
     if ((slot1==slot2)&&(slot2==slot4)) { continue; }              // characters 1 and 2 and 4 are not identical
     if ((slot1==slot3)&&(slot3==slot4)) { continue; }              // characters 1 and 3 and 4 are not identical
     if ((slot3==(slot2+1))&&(slot4==(slot3+1))) { continue; }      // no 3 characters in a row can be sequential
     if ((slot3==(slot2-1))&&(slot4==(slot3-1))) { continue; }      // no 3 characters in a row can be reverse sequential
     if ((slot4==slot3)&&(slot3==slot2)) { continue; }              // no 3 characters in a row can be identical

     for (int slot5=0;slot5<possible_chars_length;possible_chars_freq[slot5++]--) { // SLOT 5
      alpha_chars[4] = possible_chars[slot5];
      if (++possible_chars_freq[slot5] > 3) { continue; }           // each character cannot appear more than 3 times
      if ((slot4==(slot3+1))&&(slot5==(slot4+1))) { continue; }     // no 3 characters in a row can be sequential
      if ((slot4==(slot3-1))&&(slot5==(slot4-1))) { continue; }     // no 3 characters in a row can be reverse sequential
      if ((slot5==slot4)&&(slot4==slot3)) { continue; }             // no 3 characters in a row can be identical

      if (slot5==slot4) { continue; } // character 5 is not equal to character 4
      //if (slot5==slot1) { continue; } // character 5 is not equal to character 1 (disproven - urueuqky)

      for (int slot6=0;slot6<possible_chars_length;possible_chars_freq[slot6++]--) { // SLOT 6
       alpha_chars[5] = possible_chars[slot6];
       if (++possible_chars_freq[slot6] > 3) { continue; }          // each character cannot appear more than 3 times
       if ((slot3==slot5)&&(slot4==slot6)) { continue; }            // characters 3 and 5, and 4 and 6 are not identical
       if ((slot5==(slot4+1))&&(slot6==(slot5+1))) { continue; }    // no 3 characters in a row can be sequential
       if ((slot5==(slot4-1))&&(slot6==(slot5-1))) { continue; }    // no 3 characters in a row can be reverse sequential
       if ((slot6==slot5)&&(slot5==slot4)) { continue; }            // no 3 characters in a row can be identical

       for (int slot7=0;slot7<possible_chars_length;possible_chars_freq[slot7++]--) { // SLOT 7
        alpha_chars[6] = possible_chars[slot7];
        if (++possible_chars_freq[slot7] > 3) { continue; }         // each character cannot appear more than 3 times
        if ((slot6==(slot5+1))&&(slot7==(slot6+1))) { continue; }   // no 3 characters in a row can be sequential
        if ((slot6==(slot5-1))&&(slot7==(slot6-1))) { continue; }   // no 3 characters in a row can be reverse sequential
        if ((slot7==slot6)&&(slot6==slot5)) { continue; }           // no 3 characters in a row can be identical

        for (int slot8=0;slot8<possible_chars_length;possible_chars_freq[slot8++]--) { // SLOT 8
         alpha_chars[7] = possible_chars[slot8];
         if (++possible_chars_freq[slot8] > 3) { continue; }        // each character cannot appear more than 3 times
         if ((slot7==(slot6+1))&&(slot8==(slot7+1))) { continue; }  // no 3 characters in a row can be sequential
         if ((slot7==(slot6-1))&&(slot8==(slot7-1))) { continue; }  // no 3 characters in a row can be reverse sequential
         if ((slot8==slot7)&&(slot7==slot6)) { continue; }          // no 3 characters in a row can be identical
         //if ((slot2==slot3)&&(slot3==slot8)) { continue; } // characters 2, 3 and 8 cannot be identical
         //if (slot8==slot6) { continue; } // character 8 is not equal to character 6 (disproven - puphmpnp)
         unique_count = ((possible_chars_freq[0]!=0)?1:0) + ((possible_chars_freq[1]!=0)?1:0) + ((possible_chars_freq[2]!=0)?1:0) + ((possible_chars_freq[3]!=0)?1:0) + ((possible_chars_freq[4]!=0)?1:0) + ((possible_chars_freq[5]!=0)?1:0) + ((possible_chars_freq[6]!=0)?1:0) + ((possible_chars_freq[7]!=0)?1:0) + ((possible_chars_freq[8]!=0)?1:0) + ((possible_chars_freq[9]!=0)?1:0) + ((possible_chars_freq[10]!=0)?1:0) + ((possible_chars_freq[11]!=0)?1:0) + ((possible_chars_freq[12]!=0)?1:0) + ((possible_chars_freq[13]!=0)?1:0) + ((possible_chars_freq[14]!=0)?1:0) + ((possible_chars_freq[15]!=0)?1:0) + ((possible_chars_freq[16]!=0)?1:0) + ((possible_chars_freq[17]!=0)?1:0) + ((possible_chars_freq[18]!=0)?1:0) + ((possible_chars_freq[19]!=0)?1:0) + ((possible_chars_freq[20]!=0)?1:0) + ((possible_chars_freq[21]!=0)?1:0) + ((possible_chars_freq[22]!=0)?1:0) + ((possible_chars_freq[23]!=0)?1:0);

         //++counter;
         //if (unique_count == 8) { ++uniques_counter[7]; }
         //if (unique_count == 7) { ++uniques_counter[6]; }
         //if (unique_count == 6) { ++uniques_counter[5]; }
         //if (unique_count == 5) { ++uniques_counter[4]; }
         //if (unique_count == 4) { ++uniques_counter[3]; }
         //if (unique_count == 3) { ++uniques_counter[2]; }
         //if (unique_count == 2) { ++uniques_counter[1]; }
         //if (unique_count == 1) { ++uniques_counter[0]; }

         if (((desired_uniques==0)&&(min_uniques==0)) || ((min_uniques>0)&&(unique_count>=min_uniques)) || ((desired_uniques>0)&&(desired_uniques==unique_count))) {
          if (unique_count >= 5) {
           ++counter;
           if (counter >= start_at) {
            if ((stop_at > 0) && (counter >= stop_at)) { return 0; }

              // METHOD 1 - 60,500 H/s
              //puts(alpha_chars);

              // METHOD 2 - 60,500 H/s
              //printf("%s",alpha_chars);

              // METHOD 3 - 60,400 H/s
              //std::cout << alpha_chars;

              // METHOD 4 - 65,700 H/s
              fwrite(&alpha_chars, 1, 9, stdout);

           }
          }
          //if ((alpha_chars[0]=='q') && (alpha_chars[1]=='y') && (alpha_chars[2]=='r') && (alpha_chars[3]=='x') && (alpha_chars[4]=='a') && (alpha_chars[5]=='p') && (alpha_chars[6]=='w') && (alpha_chars[7]=='t')) { std::cout << "FOUND" << std::endl; return 0; }
         }

        }
       }
      }
     }
    }
   }
  }
 }
 }

/*
// debugging info
std::cout << "counter: " << counter << std::endl;
std::cout << "uniques_counter[0]: " << uniques_counter[0] << std::endl;
std::cout << "uniques_counter[1]: " << uniques_counter[1] << std::endl;
std::cout << "uniques_counter[2]: " << uniques_counter[2] << std::endl;
std::cout << "uniques_counter[3]: " << uniques_counter[3] << std::endl;
std::cout << "uniques_counter[4]: " << uniques_counter[4] << std::endl;
std::cout << "uniques_counter[5]: " << uniques_counter[5] << std::endl;
std::cout << "uniques_counter[6]: " << uniques_counter[6] << std::endl;
std::cout << "uniques_counter[7]: " << uniques_counter[7] << std::endl;
*/

 return 0;
}