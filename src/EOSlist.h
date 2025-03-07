#ifndef EOSLIST_H_
#define EOSLIST_H_

#include "EOS.h"

extern EOS *Anorthite, *Forsterite, *Fayalite, *Mg_wadsleyite, *Fe_wadsleyite, *Mg_ringwoodite, *Fe_ringwoodite, *Enstatite, *Ferrosilite, *Diopside, *Hedenbergite,*HP_clinoenstatite,*HP_clinoferrosilite, *Mg_akimotoite, *Corundum, *Pyrope,*Almandine, *Stishovite, *Mg_perovskite,*Fe_perovskit,*Periclase, *Wustite, *Majorite, *Fe_liquid, *Fe_liquid2, *Fe_liquid3, *Fe_fcc, *Fe_bcc, *Fe_hcp, *Fe_hcp2, *Fe_Seager, *Fe_hcp3, *Fe_7Si, *Fe_15Si, *Fe_Dummy, *Si_Pv_Shim, *Si_Pv, *Si_PPv, *Si_PPv_Sakai, *Si_PREM, *Si_BM2fit, *Si_Seager, *Si_Dummy, *Si_liquid, *Si_Liquid_Wolf, *Fo, *Wds, *Rwd, *Akm, *Pv_Doro, *PPv_Doro, *Fo_Sotin, *En, *Mw, *Ice_Seager, *Water_ExoPlex, *Water, *Water_sc_dummy, *IceIh, *IceIh_ExoPlex, *IceVI_ExoPlex, *IceVI_Bezacier, *IceVII_ExoPlex, *IceVII_Bezacier, *IceVII, *IceVIIp, *IceVII_FFH2004, *IceVII_FFH2004fit, *IceVII_FFH2004BM, *IceVII_Fei, *IceVII_FFH2004T, *IceX_HS, *IceX, *IceZeng2013FFH, *IceZeng2013FMNR, *Ice_Dummy, *Gas, *Gas_iso, *watervapor, *Gold, *Plat;

double dTdP_Si_Dummy (double P, double T);
// A temperature gradient that equals to the melting curve. Guarantee the temperature won't drop below the melting curve. 


#endif
