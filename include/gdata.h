#include <iostream>
#include <vector>
#include <stdlib.h>

/**
 * \file gdata.h
 *
 * This file contains Legendre-Gauss quadrature rules up to 17 points.
 *
 * Updates:
 *  - 06/20/2015 - James Grisham -- Changed from arrays to STL vectors.
 *    Also added template.
 *
 * \author Brian Dennis
 * \date 06/2000
 *
 */

template <typename T> 
void gdata(int npts,std::vector<T>& x, std::vector<T>& w) {

    //Legendre-Gauss quadrature
    if(npts > 17) {
        std::cerr<<"gauss_quad: npts > 17 "<<npts<<std::endl;
        exit(-1);
    }
    switch(npts) {
    case 1:
        x[0] = (T) 0.00000000000;
        w[0] = (T) 2.00000000000;
        break;

    case 2:
        x[0] = (T) -.577350269189626;
        x[1] = (T) .577350269189626;

        w[0] = (T) 1.00000000000000;
        w[1] = (T) 1.00000000000000;
        break;

    case 3:
        x[0] = (T) -.774596669241483;
        x[1] = (T) 0.00000000000000;
        x[2] = (T) .774596669241483;

        w[0] = (T) .555555555555555;
        w[1] = (T) .888888888888889;
        w[2] = (T) .555555555555555;
        break;

    case 4:
        x[0] = (T) -.861136311594053;
        x[1] = (T) -.339981043584856;
        x[2] = (T) .339981043584856;
        x[3] = (T) .861136311594053;

        w[0] = (T) .347854845137454;
        w[1] = (T) .652145154862546;
        w[2] = (T) .652145154862546;
        w[3] = (T) .347854845137454;
        break;

    case 5:
        x[0] = (T) -.906179845938664;
        x[1] = (T) -.538469310105683;
        x[2] = (T) 0.00000000000000;
        x[3] = (T) .538469310105683;
        x[4] = (T) .906179845938664;

        w[0] = (T) .236926885056189;
        w[1] = (T) .478628670499366;
        w[2] = (T) .568888888888889;
        w[3] = (T) .478628670499366;
        w[4] = (T) .236926885056189;
        break;

    case 6:
        x[0] = (T) -.932469514203152;
        x[1] = (T) -.661209386466265;
        x[2] = (T) -.238619186083197;
        x[3] = (T) .238619186083197;
        x[4] = (T) .661209386466265;
        x[5] = (T) .932469514203152;

        w[0] = (T) .171324492379107;
        w[1] = (T) .360761573048139;
        w[2] = (T) .467913934572691;
        w[3] = (T) .467913934572691;
        w[4] = (T) .360761573048139;
        w[5] = (T) .171324492379107;
        break;

    case 7:
        x[0] = (T) -.949107912342759;
        x[1] = (T) -.741531185599394;
        x[2] = (T) -.405845151377397;
        x[3] = (T) 0.00000000000000;
        x[4] = (T) .405845151377397;
        x[5] = (T) .741531185599394;
        x[6] = (T) .949107912342759;

        w[0] = (T) .129484966168870;
        w[1] = (T) .279705391489277;
        w[2] = (T) .381830050505119;
        w[3] = (T) .417949183673469;
        w[4] = (T) .381830050505119;
        w[5] = (T) .279705391489277;
        w[6] = (T) .129484966168870;
        break;

    case 8:
        x[0] = (T) -.960289856497536;
        x[1] = (T) -.796666477413627;
        x[2] = (T) -.525532409916329;
        x[3] = (T) -.183434642495650;
        x[4] = (T) .183434642495650;
        x[5] = (T) .525532409916329;
        x[6] = (T) .796666477413627;
        x[7] = (T) .960289856497536;

        w[0] = (T) .101228536290376;
        w[1] = (T) .222381034423374;
        w[2] = (T) .313706645877887;
        w[3] = (T) .362683783378362;
        w[4] = (T) .362683783378362;
        w[5] = (T) .313706645877887;
        w[6] = (T) .222381034423374;
        w[7] = (T) .101228536290376;
        break;

    case 9:
        x[0] = (T) -.968160239507626;
        x[1] = (T) -.836061107326636;
        x[2] = (T) -.613371432700590;
        x[3] = (T) -.324253423403809;
        x[4] = (T) 0.00000000000000;
        x[5] = (T) .324253423403809;
        x[6] = (T) .613371432700590;
        x[7] = (T) .836061107326636;
        x[8] = (T) .968160239507626;

        w[0] = (T) .081274388361574;
        w[1] = (T) .180648160694857;
        w[2] = (T) .260610696402935;
        w[3] = (T) .312347077040003;
        w[4] = (T) .330239355001260;
        w[5] = (T) .312347077040003;
        w[6] = (T) .260610696402935;
        w[7] = (T) .180648160694857;
        w[8] = (T) .081274388361574;
        break;

    case 10:


        x[0] = (T)  -.973906528517172;
        x[1] = (T)  -.865053366688985;
        x[2] = (T)  -.679409568299024;
        x[3] = (T)  -.433395364129247;
        x[4] = (T)  -.148874338981631;
        x[5] = (T)  .148874338981631;
        x[6] = (T)  .433395364129247;
        x[7] = (T)  .679409568299024;
        x[8] = (T)  .865053366688985;
        x[9] = (T)  .973906528517172;

        w[0] = (T) .066671344308688;
        w[1] = (T) .149451349150581;
        w[2] = (T) .219086362515982;
        w[3] = (T) .269266719309996;
        w[4] = (T) .295524224714753;
        w[5] = (T) .295524224714753;
        w[6] = (T) .269266719309996;
        w[7] = (T) .219086362515982;
        w[8] = (T) .149451349150581;
        w[9] = (T) .066671344308688;

        break;

    case 11:

        x[0] = (T) -.97822865814605699280;
        x[1] = (T) -.88706259976809529907;
        x[2] = (T) -.73015200557404932409;
        x[3] = (T) -.51909612920681181592;
        x[4] = (T) -.26954315595234497233;
        x[5] = (T) 0.00000000000000000000;
        x[6] = (T) .26954315595234497233;
        x[7] = (T) .51909612920681181592;
        x[8] = (T) .73015200557404932409;
        x[9] = (T) .88706259976809529907;
        x[10] = (T) .97822865814605699280;

        w[0] = (T) .055668567116173666482;
        w[1] = (T) .12558036946490462463;
        w[2] = (T) .18629021092773425142;
        w[3] = (T) .23319376459199047991;
        w[4] = (T) .26280454451024666218;
        w[5] = (T) .27292508677790063071;
        w[6] = (T) .26280454451024666218;
        w[7] = (T) .23319376459199047991;
        w[8] = (T) .18629021092773425142;
        w[9] = (T) .12558036946490462463;
        w[10] = (T) .055668567116173666482;

        break;

    case 12:
        x[0] = (T) -.98156063424671925069;
        x[1] = (T) -.90411725637047485667;
        x[2] = (T) -.76990267419430468703;
        x[3] = (T) -.58731795428661744729;
        x[4] = (T) -.36783149899818019375;
        x[5] = (T) -.12523340851146891547;
        x[6] = (T) .12523340851146891547;
        x[7] = (T) .36783149899818019375;
        x[8] = (T) .58731795428661744729;
        x[9] = (T) .76990267419430468703;
        x[10] = (T) .90411725637047485667;
        x[11] = (T) .98156063424671925069;

        w[0] = (T) .047175336386411827194;
        w[1] = (T) .10693932599531843096;
        w[2] = (T) .16007832854334622633;
        w[3] = (T) .20316742672306592174;
        w[4] = (T) .23349253653835480876;
        w[5] = (T) .24914704581340278500;
        w[6] = (T) .24914704581340278500;
        w[7] = (T) .23349253653835480876;
        w[8] = (T) .20316742672306592174;
        w[9] = (T) .16007832854334622633;
        w[10] = (T) .10693932599531843096;
        w[11] = (T) .047175336386411827194;


        break;

    case 13:
        x[0] = (T) -.98418305471858814947;
        x[1] = (T) -.91759839922297796520;
        x[2] = (T) -.80157809073330991279;
        x[3] = (T) -.64234933944034022064;
        x[4] = (T) -.44849275103644685287;
        x[5] = (T) -.23045831595513479406;
        x[6] = (T) 0.0000000000000000000;
        x[7] = (T) .23045831595513479406;
        x[8] = (T) .44849275103644685287;
        x[9] = (T) .64234933944034022064;
        x[10] = (T) .80157809073330991279;
        x[11] = (T) .91759839922297796520;
        x[12] = (T) .98418305471858814947;


        w[0] = (T) .040484004765315879520;
        w[1] = (T) .092121499837728447914;
        w[2] = (T) .13887351021978723846;
        w[3] = (T) .17814598076194573828;
        w[4] = (T) .20781604753688850231;
        w[5] = (T) .22628318026289723841;
        w[6] = (T) .23255155323087391019;
        w[7] = (T) .22628318026289723841;
        w[8] = (T) .20781604753688850231;
        w[9] = (T) .17814598076194573828;
        w[10] = (T) .13887351021978723846;
        w[11] = (T) .092121499837728447914;
        w[12] = (T) .040484004765315879520;

        break;

    case 14:

        x[0] = (T) -.98628380869681233884;
        x[1] = (T) -.92843488366357351733;
        x[2] = (T) -.82720131506976499318;
        x[3] = (T) -.68729290481168547014;
        x[4] = (T) -.51524863635815409196;
        x[5] = (T) -.31911236892788976043;
        x[6] = (T) -.10805494870734366206;
        x[7] = (T) .10805494870734366206;
        x[8] = (T) .31911236892788976043;
        x[9] = (T) .51524863635815409196;
        x[10] = (T) .68729290481168547014;
        x[11] = (T) .82720131506976499318;
        x[12] = (T) .92843488366357351733;
        x[13] = (T) .98628380869681233884;



        w[0] = (T) .035119460331751863031;
        w[1] = (T) .080158087159760209805;
        w[2] = (T) .12151857068790318468;
        w[3] = (T) .15720316715819353456;
        w[4] = (T) .18553839747793781374;
        w[5] = (T) .20519846372129560396;
        w[6] = (T) .21526385346315779019;
        w[7] = (T) .21526385346315779019;
        w[8] = (T) .20519846372129560396;
        w[9] = (T) .18553839747793781374;
        w[10] = (T) .15720316715819353456;
        w[11] = (T) .12151857068790318468;
        w[12] = (T) .080158087159760209805;
        w[13] = (T) .035119460331751863031;

        break;

    case 15:
        x[0] = (T) -.98799251802048542848;
        x[1] = (T) -.93727339240070590430;
        x[2] = (T) -.84820658341042721620;
        x[3] = (T) -.72441773136017004741;
        x[4] = (T) -.57097217260853884753;
        x[5] = (T) -.39415134707756336989;
        x[6] = (T) -.20119409399743452230;
        x[7] = (T) 0.0000000000000000000;
        x[8] = (T) .20119409399743452230;
        x[9] = (T) .39415134707756336989;
        x[10] = (T) .57097217260853884753;
        x[11] = (T) .72441773136017004741;
        x[12] = (T) .84820658341042721620;
        x[13] = (T) .93727339240070590430;
        x[14] = (T) .98799251802048542848;

        w[0] = (T) .030753241996117268354;
        w[1] = (T) .070366047488108124709;
        w[2] = (T) .10715922046717193501;
        w[3] = (T) .13957067792615431444;
        w[4] = (T) .16626920581699393355;
        w[5] = (T) .18616100001556221102;
        w[6] = (T) .19843148532711157645;
        w[7] = (T) .20257824192556127288;
        w[8] = (T) .19843148532711157645;
        w[9] = (T) .18616100001556221102;
        w[10] = (T) .16626920581699393355;
        w[11] = (T) .13957067792615431444;
        w[12] = (T) .10715922046717193501;
        w[13] = (T) .070366047488108124709;
        w[14] = (T) .030753241996117268354;

        break;

    case 16:


        x[0] = (T) -.98940093499164993259;
        x[1] = (T) -.94457502307323257607;
        x[2] = (T) -.86563120238783174388;
        x[3] = (T) -.75540440835500303389;
        x[4] = (T) -.61787624440264374844;
        x[5] = (T) -.45801677765722738634;
        x[6] = (T) -.28160355077925891323;
        x[7] = (T) -.095012509837637440185;
        x[8] = (T) .095012509837637440185;
        x[9] = (T) .28160355077925891323;
        x[10] = (T) .45801677765722738634;
        x[11] = (T) .61787624440264374844;
        x[12] = (T) .75540440835500303389;
        x[13] = (T) .86563120238783174388;
        x[14] = (T) .94457502307323257607;
        x[15] = (T) .98940093499164993259;




        w[0] = (T) .027152459411754094851;
        w[1] = (T) .062253523938647892862;
        w[2] = (T) .095158511682492784809;
        w[3] = (T) .12462897125553387205;
        w[4] = (T) .14959598881657673208;
        w[5] = (T) .16915651939500253818;
        w[6] = (T) .18260341504492358886;
        w[7] = (T) .18945061045506849628;
        w[8] = (T) .18945061045506849628;
        w[9] = (T) .18260341504492358886;
        w[10] = (T) .16915651939500253818;
        w[11] = (T) .14959598881657673208;
        w[12] = (T) .12462897125553387205;
        w[13] = (T) .095158511682492784809;
        w[14] = (T) .062253523938647892862;
        w[15] = (T) .027152459411754094851;


        break;

    case 17:

        x[0] = (T) -.99057547531441733567;
        x[1] = (T) -.95067552176876776122;
        x[2] = (T) -.88023915372698590212;
        x[3] = (T) -.78151400389680140692;
        x[4] = (T) -.65767115921669076585;
        x[5] = (T) -.51269053708647696788;
        x[6] = (T) -.35123176345387631529;
        x[7] = (T) -.17848418149584785585;
        x[8] = (T) 0.0000000000000000000;
        x[9] = (T) .17848418149584785585;
        x[10] = (T) .35123176345387631529;
        x[11] = (T) .51269053708647696788;
        x[12] = (T) .65767115921669076585;
        x[13] = (T) .78151400389680140692;
        x[14] = (T) .88023915372698590212;
        x[15] = (T) .95067552176876776122;
        x[16] = (T) .99057547531441733567;


        w[0] = (T) .024148302868547931960;
        w[1] = (T) .055459529373987201129;
        w[2] = (T) .085036148317179180883;
        w[3] = (T) .11188384719340397109;
        w[4] = (T) .13513636846852547328;
        w[5] = (T) .15404576107681028808;
        w[6] = (T) .16800410215645004450;
        w[7] = (T) .17656270536699264632;
        w[8] = (T) .17944647035620652545;
        w[9] = (T) .17656270536699264632;
        w[10] = (T) .16800410215645004450;
        w[11] = (T) .15404576107681028808;
        w[12] = (T) .13513636846852547328;
        w[13] = (T) .11188384719340397109;
        w[14] = (T) .085036148317179180883;
        w[15] = (T) .055459529373987201129;
        w[16] = (T) .024148302868547931960;
    }

}
