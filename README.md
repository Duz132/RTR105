# RTR105
Studiju kursu Datormācība pamatkurss elektroniskā klāde


TERMINĀLA KOMANDAS  
CTRL+ALT+T - termināls;  
TAB - teksta papildinājums (fire+tab = firefox);  
CTRL+SHIFT+T - jauna tabu terminālā;  
CTRL+L - pacelt tekstu uz augšu/notīrīt ekrānu;  
Bultiņas uz augšu un uz leju(↑↓)- komandas vēsture;  
man - aprakstījums;  
echo $0 - kas interpretē;  
uname -a - Linux aprakstījums;  
whoami - kas es esmu;  
pwd - kur es atrodos;  
ls - kas ir pieejams;  
ls -l - detalizēts ls; PIEMĒRAM (drwxr-xr-x 2 user user 4096 Aug 26 18:29  Desktop)  
ls -a - detalizēts ls; PIEMĒRAM (.                 .gnupg                 .selected_editor)    
la -al - detalizēts ls; PIEMĒRAM (drwxrwxr-x  3 user user 4096 Feb 20  2019  .subversion)  
cd / cd home/user / cd ~ - pāriet uz HOME directory;  
cd . - palikt šajā direktorijā;  
cd .. - iziet no apakšmapes;  
cat - lasa tekstu;  
sh - interpretācijas mainīšana;  
ps -aux | grep sh - meklēšana pēc sh;  
mkdir - mapes veidošana;  
rmdir - mapes tīrīšana;  
touch - izveidot tukšu failu;  
echo xxx >aaa.txt - uzrakstīt xxx failā aaa.txt;  
cat xxx.txt - lasīt failu xxx.txt;  
nano xxx.txt - NANO redaktors. (CTRL+K - copy; CTRL+U - paste; CTRL+X - exit and save);  
cp - copy;  
mv - move;  
mv ~/xxx.txt ~/kkur/nosaukums - move failu xxx.txt uz kkur ar nosaukumu "nosaukums";  
ls -l Documents/ - tā kā ls -l tikai mapē documents;  
*.txt - paņemt visus txt failus;  
rm -fr ManaMape - izdzēst mapi ManaMape jā tajā ir faili;  
echo $PATH - visi pathi;  
chmod - nomainīt faila preferences;  
chmod 700 fails - execute preferences;  
git clone "link" - upload repositoriju;  
git config - identificē lietotāju;  
gcc file.c - gcc compiler;  
./name of file - execute failu;  
./git-upload datums - uzlade visu jauno uz github;  

NANO KOMANDAS  
\n - pārnesums jaunā rindā;  
\r - kursors uz rindas sākumu;  
\t - tabulācija;  
\a - pīkstiens;  
\'- attēlot apostrofu (pirms ir slīpa svītra \ kā \n);  
\"- attēlot pēdiņas (pirms ir slīpa svītra \ kā \n);  
\? - attēlot jautājuma zīmi (pirms ir slīpa svītra \ kā \n);  
\\ - attēlot apgriezto slīpsvītru (pirms ir slīpa svītra \ kā \n);  

OPERĀCIJAS (https://en.cppreference.com/w/c/language/operator_precedence)  
(*) << - palielināt par 1 bitu (ekvivalenta reizināšanai uz 2);  
1 bite pa kreisi - reiz. uz 2; 2 bit - 4; 3 bit - 8 ...;  
(*) == - equal (pārbaude =);  
(*) != - not equal(pārbaude not =);  
(*) % - atlikums no dalīšanas;  
(*) & - logic AND (if a and b = 1 then 1 else 0);  
(*) | - logic OR (ja kaut viens ir 1 tad 1);  
(*) ~ - logic INVERSIJA (inversija 0>>1 1>>0);  
(*) ^ - logic OR exception (ja tikai viens ir 1 tad 1 (1 un 0 >> 1; 1 un 1>>0));  
(*) +,-,*,/,<,<=,>,>= - kš parastajā matemātikā;  
(*) && - logic AND (if a and b <> 0 then 1 else 0);  
(*) || - logic OR (ja kaut viens elements <> 0 tad 1);  
(*) printf("...",...); - uzrakstīt;  
(*) scanf("%d",&...); - noskanēt ievadīto skaitli, kuru ievada lietotājs;  
(*) if (...)  
{  
...;  
}  
else  
{  
...;  
}  
(*) while(...(pārbaude ja sk ir 0))  
{  
...  
}  
(*) for(...;nosacījums/saliktais nosacījums/;...)  

(*) #include<math.h> - math directoriju  
(*) fabs() - modulis (no math.h)  
(*) g++ file.c - jauns kompilators  
(*) cc gen.c bib.c - kompilācija prog gen.c ar palīgprog bib.c  
(*) EOF - END OF FILE NOT STRING  
(*) ' ' - atstarpe string  
(*) '\0' - END OF STRING  
(*) FILE *fptr - mainiiga fptr, kura straadaas ar failu  
(*) fptr=fopen("test.txt","w"); - atvert failu test/txt FOR WRITE("w") OR READ ("r")  
(*) fprintf; fscanf - file print and scan  
(*) fclose(fptr) - aizveert failu  
(*) scanf("%[^\n]", &teikums) - scaneet visu string "teikums" ar atstarpem  
