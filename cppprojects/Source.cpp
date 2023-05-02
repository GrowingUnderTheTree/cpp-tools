#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "numberguess.h"
#include "Help.h"
#include "circarea.h"
#include "sphere.h"
#include "pythagoras.h"
#include "createfile.h"
#include "coeff.h"
#include "entropy.h"
#include "multiplereg.h"
#include "linearregressiontestvalue.h"
#include "definiteintegral.h"
#include "nprncr.h"
#include "derivatives.h"
#include "polynomial.h"
#include "binomialdistribution.h"
#include "factoringquadratic.h"
class numberguessr;
class Help;
class CircleArea;
class spherevol;
class pythagorastheorem;
class filecreate;
class coeff;
class password;
class linearreg;
class regr;
class testvalue;
class powerrule;
class integrationrule;
class Trigonometry;
class npr;
class ncr;
class rules;
class calculator;
class poly;
class bdst;
class quadratic;

int main() {
	while (true)
	{
		//int x;
		std::string input;
		system("Color 0E");
		std::cout << "CALCULATOR\n";
		std::cout << R"(
                                                                                                         
                                                                                                         
                        ,--,                             ,--,                  ___                       
                      ,--.'|                           ,--.'|                ,--.'|_                     
                      |  | :                      ,--, |  | :                |  | :,'   ,---.    __  ,-. 
                      :  : '                    ,'_ /| :  : '                :  : ' :  '   ,'\ ,' ,'/ /| 
   ,---.     ,--.--.  |  ' |      ,---.    .--. |  | : |  ' |     ,--.--.  .;__,'  /  /   /   |'  | |' | 
  /     \   /       \ '  | |     /     \ ,'_ /| :  . | '  | |    /       \ |  |   |  .   ; ,. :|  |   ,' 
 /    / '  .--.  .-. ||  | :    /    / ' |  ' | |  . . |  | :   .--.  .-. |:__,'| :  '   | |: :'  :  /   
.    ' /    \__\/: . .'  : |__ .    ' /  |  | ' |  | | '  : |__  \__\/: . .  '  : |__'   | .; :|  | '    
'   ; :__   ," .--.; ||  | '.'|'   ; :__ :  | : ;  ; | |  | '.'| ," .--.; |  |  | '.'|   :    |;  : |    
'   | '.'| /  /  ,.  |;  :    ;'   | '.'|'  :  `--'   \;  :    ;/  /  ,.  |  ;  :    ;\   \  / |  , ;    
|   :    :;  :   .'   \  ,   / |   :    ::  ,      .-./|  ,   /;  :   .'   \ |  ,   /  `----'   ---'     
 \   \  / |  ,     .-./---`-'   \   \  /  `--`----'     ---`-' |  ,     .-./  ---`-'                     
  `----'   `--`---'              `----'                         `--`---'                                 
                                                                                                         
)" <<  '\n';
		std::cout << "Please enter the specific command to perform a specific task.\n Please type out 'help' for help : ";
		std::cin >> input;
		if (input == "Numberguesser") {
			numberguesr gues;
			gues.guessit();
		}
		else if (input=="help") {
			Help help;
			help.helpme();
		}
		else if (input == "Circlearea") {
			CircleArea ca;
			ca.circarea();
		}
		else if (input == "Spherevolume") {
			spherevol sv;
			sv.volume();
		}
		else if (input == "pythagoras") {
			pythagorastheorem pyt;
			pyt.pt();
		}
		else if (input == "createfile") {
			filecreate fc;
			fc.cf();
		}
		else if (input == "coeffecientcounter") {
			coeff co;
			co.coeffecient();
		}
		else if (input == "passwordentropy") {
			password pa;
			pa.passwordentropy();
		}
		else if (input == "linearregression") {
			regr lr;
			lr.linreg();
		}
		else if (input == "testvalue") {
			testvalue tv;
			tv.tvalue();
		}
		else if (input == "definiteintegralpowerrule"){
			powerrule pr;
			pr.power();
		}
		else if (input == "helpdefiniteintegral"){
			integrationrule ir;
			ir.show();
		}
		else if (input == "definiteintegraltrigidentity") {
			Trigonometry tr;
			tr.calc();
		}
		else if (input == "npr") {
			npr perm;
			perm.permutation();
		}
		else if (input == "ncr") {
			ncr comb;
			comb.combination();
		}
		else if (input == "derivativecalculator") {
			calculator calc;
			calc.calc();
		}
		else if (input == "helpderivative") {
			rules r;
			r.show();
		}
		else if (input == "linearpolynomial") {
			poly p;
			p.poly1d();
		}
		else if (input == "binomialdistribution") {
			bdst bd;
			bd.calc();
		}
		else if (input == "quads"){
			quadratic qd;
			qd.factor();
		}
		else {
			std::cout << "Please type out 'help' for help \n";
		}
	}

}
