// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cREgDistVal_FishEye_10_5_5.h"


cREgDistVal_FishEye_10_5_5::cREgDistVal_FishEye_10_5_5():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,53));
   Close(false);
}



void cREgDistVal_FishEye_10_5_5::ComputeVal()
{
   double tmp0_ = mCompCoord[3];
   double tmp1_ = mLocRegDistValP1_x - tmp0_;
   double tmp2_ = (tmp1_) / mLocFishEye_10_5_5_State_0_0;
   double tmp3_ = mCompCoord[4];
   double tmp4_ = mLocRegDistValP1_y - tmp3_;
   double tmp5_ = (tmp4_) / mLocFishEye_10_5_5_State_0_0;
   double tmp6_ = (tmp2_) * (tmp2_);
   double tmp7_ = (tmp5_) * (tmp5_);
   double tmp8_ = tmp6_ + tmp7_;
   double tmp9_ = (tmp8_) * (tmp8_);
   double tmp10_ = tmp9_ * (tmp8_);
   double tmp11_ = tmp10_ * (tmp8_);
   double tmp12_ = tmp11_ * (tmp8_);
   double tmp13_ = tmp12_ * (tmp8_);
   double tmp14_ = tmp13_ * (tmp8_);
   double tmp15_ = tmp14_ * (tmp8_);
   double tmp16_ = tmp15_ * (tmp8_);
   double tmp17_ = (tmp2_) * (tmp5_);
   double tmp18_ = (tmp5_) * (tmp2_);
   double tmp19_ = tmp18_ * (tmp2_);
   double tmp20_ = tmp7_ * (tmp2_);
   double tmp21_ = (tmp5_) * tmp7_;
   double tmp22_ = tmp19_ * (tmp2_);
   double tmp23_ = tmp20_ * (tmp2_);
   double tmp24_ = tmp21_ * (tmp2_);
   double tmp25_ = (tmp5_) * tmp21_;
   double tmp26_ = mCompCoord[5];
   double tmp27_ = (tmp8_) * tmp26_;
   double tmp28_ = mCompCoord[6];
   double tmp29_ = tmp9_ * tmp28_;
   double tmp30_ = tmp27_ + tmp29_;
   double tmp31_ = mCompCoord[7];
   double tmp32_ = tmp10_ * tmp31_;
   double tmp33_ = tmp30_ + tmp32_;
   double tmp34_ = mCompCoord[8];
   double tmp35_ = tmp11_ * tmp34_;
   double tmp36_ = tmp33_ + tmp35_;
   double tmp37_ = mCompCoord[9];
   double tmp38_ = tmp12_ * tmp37_;
   double tmp39_ = tmp36_ + tmp38_;
   double tmp40_ = mCompCoord[10];
   double tmp41_ = tmp13_ * tmp40_;
   double tmp42_ = tmp39_ + tmp41_;
   double tmp43_ = mCompCoord[11];
   double tmp44_ = tmp14_ * tmp43_;
   double tmp45_ = tmp42_ + tmp44_;
   double tmp46_ = mCompCoord[12];
   double tmp47_ = tmp15_ * tmp46_;
   double tmp48_ = tmp45_ + tmp47_;
   double tmp49_ = mCompCoord[13];
   double tmp50_ = tmp16_ * tmp49_;
   double tmp51_ = tmp48_ + tmp50_;
   double tmp52_ = tmp16_ * (tmp8_);
   double tmp53_ = mCompCoord[14];
   double tmp54_ = tmp52_ * tmp53_;
   double tmp55_ = tmp51_ + tmp54_;
   double tmp56_ = mCompCoord[15];
   double tmp57_ = mCompCoord[16];
   double tmp58_ = mCompCoord[17];
   double tmp59_ = mCompCoord[18];
   double tmp60_ = mCompCoord[19];
   double tmp61_ = mCompCoord[20];
   double tmp62_ = mCompCoord[21];
   double tmp63_ = mCompCoord[22];
   double tmp64_ = mCompCoord[23];
   double tmp65_ = mCompCoord[24];
   double tmp66_ = mCompCoord[26];
   double tmp67_ = tmp6_ * (tmp2_);
   double tmp68_ = tmp67_ * (tmp2_);
   double tmp69_ = tmp22_ * (tmp2_);
   double tmp70_ = tmp23_ * (tmp2_);
   double tmp71_ = tmp24_ * (tmp2_);
   double tmp72_ = tmp25_ * (tmp2_);
   double tmp73_ = (tmp5_) * tmp25_;

  mVal[0] = (tmp0_ + (tmp2_ + (tmp2_) * (tmp55_) + tmp56_ * (tmp8_ + 2 * tmp6_) + tmp57_ * 2 * tmp17_ + (tmp8_) * (tmp58_ * (tmp8_ + 4 * tmp6_) + tmp59_ * 2 * 2 * tmp17_) + tmp9_ * (tmp60_ * (tmp8_ + 6 * tmp6_) + tmp61_ * 2 * 3 * tmp17_) + tmp10_ * (tmp62_ * (tmp8_ + 8 * tmp6_) + tmp63_ * 2 * 4 * tmp17_) + tmp11_ * (tmp64_ * (tmp8_ + 10 * tmp6_) + tmp65_ * 2 * 5 * tmp17_) + mCompCoord[25] * (tmp2_) + tmp66_ * (tmp5_) + mCompCoord[28] * tmp19_ + mCompCoord[30] * tmp20_ + mCompCoord[32] * tmp21_ + mCompCoord[35] * tmp22_ + mCompCoord[37] * tmp23_ + mCompCoord[39] * tmp24_ + mCompCoord[41] * tmp25_ + mCompCoord[43] * tmp69_ + mCompCoord[45] * tmp70_ + mCompCoord[47] * tmp71_ + mCompCoord[49] * tmp72_ + mCompCoord[51] * tmp73_) * mLocFishEye_10_5_5_State_0_0) - mLocRegDistKnownVal_x;

  mVal[1] = (tmp3_ + (tmp5_ + (tmp5_) * (tmp55_) + tmp56_ * 2 * tmp17_ + tmp57_ * (tmp8_ + 2 * tmp7_) + (tmp8_) * (tmp58_ * 2 * 2 * tmp17_ + tmp59_ * (tmp8_ + 4 * tmp7_)) + tmp9_ * (tmp60_ * 2 * 3 * tmp17_ + tmp61_ * (tmp8_ + 6 * tmp7_)) + tmp10_ * (tmp62_ * 2 * 4 * tmp17_ + tmp63_ * (tmp8_ + 8 * tmp7_)) + tmp11_ * (tmp64_ * 2 * 5 * tmp17_ + tmp65_ * (tmp8_ + 10 * tmp7_)) + tmp66_ * (tmp2_) + mCompCoord[27] * tmp67_ + mCompCoord[29] * tmp19_ + mCompCoord[31] * tmp20_ + mCompCoord[33] * tmp21_ + mCompCoord[34] * tmp68_ + mCompCoord[36] * tmp22_ + mCompCoord[38] * tmp23_ + mCompCoord[40] * tmp24_ + mCompCoord[42] * tmp68_ * (tmp2_) + mCompCoord[44] * tmp69_ + mCompCoord[46] * tmp70_ + mCompCoord[48] * tmp71_ + mCompCoord[50] * tmp72_ + mCompCoord[52] * tmp73_) * mLocFishEye_10_5_5_State_0_0) - mLocRegDistKnownVal_y;

}


void cREgDistVal_FishEye_10_5_5::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[3];
   double tmp1_ = mLocRegDistValP1_x - tmp0_;
   double tmp2_ = (tmp1_) / mLocFishEye_10_5_5_State_0_0;
   double tmp3_ = mCompCoord[4];
   double tmp4_ = mLocRegDistValP1_y - tmp3_;
   double tmp5_ = (tmp4_) / mLocFishEye_10_5_5_State_0_0;
   double tmp6_ = (tmp2_) * (tmp2_);
   double tmp7_ = (tmp5_) * (tmp5_);
   double tmp8_ = tmp6_ + tmp7_;
   double tmp9_ = (tmp8_) * (tmp8_);
   double tmp10_ = tmp9_ * (tmp8_);
   double tmp11_ = tmp10_ * (tmp8_);
   double tmp12_ = tmp11_ * (tmp8_);
   double tmp13_ = tmp12_ * (tmp8_);
   double tmp14_ = tmp13_ * (tmp8_);
   double tmp15_ = tmp14_ * (tmp8_);
   double tmp16_ = tmp15_ * (tmp8_);
   double tmp17_ = (tmp2_) * (tmp5_);
   double tmp18_ = (tmp5_) * (tmp2_);
   double tmp19_ = tmp18_ * (tmp2_);
   double tmp20_ = tmp7_ * (tmp2_);
   double tmp21_ = (tmp5_) * tmp7_;
   double tmp22_ = tmp19_ * (tmp2_);
   double tmp23_ = tmp20_ * (tmp2_);
   double tmp24_ = tmp21_ * (tmp2_);
   double tmp25_ = (tmp5_) * tmp21_;
   double tmp26_ = -(1);
   double tmp27_ = tmp26_ * mLocFishEye_10_5_5_State_0_0;
   double tmp28_ = ElSquare(mLocFishEye_10_5_5_State_0_0);
   double tmp29_ = (tmp27_) / tmp28_;
   double tmp30_ = mCompCoord[5];
   double tmp31_ = (tmp8_) * tmp30_;
   double tmp32_ = mCompCoord[6];
   double tmp33_ = tmp9_ * tmp32_;
   double tmp34_ = tmp31_ + tmp33_;
   double tmp35_ = mCompCoord[7];
   double tmp36_ = tmp10_ * tmp35_;
   double tmp37_ = tmp34_ + tmp36_;
   double tmp38_ = mCompCoord[8];
   double tmp39_ = tmp11_ * tmp38_;
   double tmp40_ = tmp37_ + tmp39_;
   double tmp41_ = mCompCoord[9];
   double tmp42_ = tmp12_ * tmp41_;
   double tmp43_ = tmp40_ + tmp42_;
   double tmp44_ = mCompCoord[10];
   double tmp45_ = tmp13_ * tmp44_;
   double tmp46_ = tmp43_ + tmp45_;
   double tmp47_ = mCompCoord[11];
   double tmp48_ = tmp14_ * tmp47_;
   double tmp49_ = tmp46_ + tmp48_;
   double tmp50_ = mCompCoord[12];
   double tmp51_ = tmp15_ * tmp50_;
   double tmp52_ = tmp49_ + tmp51_;
   double tmp53_ = mCompCoord[13];
   double tmp54_ = tmp16_ * tmp53_;
   double tmp55_ = tmp52_ + tmp54_;
   double tmp56_ = tmp16_ * (tmp8_);
   double tmp57_ = mCompCoord[14];
   double tmp58_ = tmp56_ * tmp57_;
   double tmp59_ = tmp55_ + tmp58_;
   double tmp60_ = (tmp29_) * (tmp2_);
   double tmp61_ = tmp60_ + tmp60_;
   double tmp62_ = (tmp61_) * (tmp8_);
   double tmp63_ = tmp62_ + tmp62_;
   double tmp64_ = (tmp63_) * (tmp8_);
   double tmp65_ = (tmp61_) * tmp9_;
   double tmp66_ = tmp64_ + tmp65_;
   double tmp67_ = (tmp66_) * (tmp8_);
   double tmp68_ = (tmp61_) * tmp10_;
   double tmp69_ = tmp67_ + tmp68_;
   double tmp70_ = (tmp69_) * (tmp8_);
   double tmp71_ = (tmp61_) * tmp11_;
   double tmp72_ = tmp70_ + tmp71_;
   double tmp73_ = (tmp72_) * (tmp8_);
   double tmp74_ = (tmp61_) * tmp12_;
   double tmp75_ = tmp73_ + tmp74_;
   double tmp76_ = (tmp75_) * (tmp8_);
   double tmp77_ = (tmp61_) * tmp13_;
   double tmp78_ = tmp76_ + tmp77_;
   double tmp79_ = (tmp78_) * (tmp8_);
   double tmp80_ = (tmp61_) * tmp14_;
   double tmp81_ = tmp79_ + tmp80_;
   double tmp82_ = (tmp81_) * (tmp8_);
   double tmp83_ = (tmp61_) * tmp15_;
   double tmp84_ = tmp82_ + tmp83_;
   double tmp85_ = mCompCoord[15];
   double tmp86_ = mCompCoord[16];
   double tmp87_ = tmp86_ * 2;
   double tmp88_ = mCompCoord[17];
   double tmp89_ = 4 * tmp6_;
   double tmp90_ = tmp8_ + tmp89_;
   double tmp91_ = tmp88_ * (tmp90_);
   double tmp92_ = mCompCoord[18];
   double tmp93_ = tmp92_ * 2;
   double tmp94_ = tmp93_ * 2;
   double tmp95_ = tmp94_ * tmp17_;
   double tmp96_ = tmp91_ + tmp95_;
   double tmp97_ = (tmp29_) * (tmp5_);
   double tmp98_ = mCompCoord[19];
   double tmp99_ = 6 * tmp6_;
   double tmp100_ = tmp8_ + tmp99_;
   double tmp101_ = tmp98_ * (tmp100_);
   double tmp102_ = mCompCoord[20];
   double tmp103_ = tmp102_ * 2;
   double tmp104_ = tmp103_ * 3;
   double tmp105_ = tmp104_ * tmp17_;
   double tmp106_ = tmp101_ + tmp105_;
   double tmp107_ = mCompCoord[21];
   double tmp108_ = 8 * tmp6_;
   double tmp109_ = tmp8_ + tmp108_;
   double tmp110_ = tmp107_ * (tmp109_);
   double tmp111_ = mCompCoord[22];
   double tmp112_ = tmp111_ * 2;
   double tmp113_ = tmp112_ * 4;
   double tmp114_ = tmp113_ * tmp17_;
   double tmp115_ = tmp110_ + tmp114_;
   double tmp116_ = mCompCoord[23];
   double tmp117_ = 10 * tmp6_;
   double tmp118_ = tmp8_ + tmp117_;
   double tmp119_ = tmp116_ * (tmp118_);
   double tmp120_ = mCompCoord[24];
   double tmp121_ = tmp120_ * 2;
   double tmp122_ = tmp121_ * 5;
   double tmp123_ = tmp122_ * tmp17_;
   double tmp124_ = tmp119_ + tmp123_;
   double tmp125_ = mCompCoord[25];
   double tmp126_ = mCompCoord[28];
   double tmp127_ = mCompCoord[30];
   double tmp128_ = tmp97_ * (tmp2_);
   double tmp129_ = (tmp29_) * tmp18_;
   double tmp130_ = tmp128_ + tmp129_;
   double tmp131_ = mCompCoord[35];
   double tmp132_ = (tmp29_) * tmp7_;
   double tmp133_ = mCompCoord[37];
   double tmp134_ = mCompCoord[39];
   double tmp135_ = (tmp130_) * (tmp2_);
   double tmp136_ = (tmp29_) * tmp19_;
   double tmp137_ = tmp135_ + tmp136_;
   double tmp138_ = mCompCoord[43];
   double tmp139_ = tmp132_ * (tmp2_);
   double tmp140_ = (tmp29_) * tmp20_;
   double tmp141_ = tmp139_ + tmp140_;
   double tmp142_ = mCompCoord[45];
   double tmp143_ = (tmp29_) * tmp21_;
   double tmp144_ = mCompCoord[47];
   double tmp145_ = mCompCoord[49];
   double tmp146_ = tmp97_ + tmp97_;
   double tmp147_ = (tmp146_) * (tmp8_);
   double tmp148_ = tmp147_ + tmp147_;
   double tmp149_ = (tmp148_) * (tmp8_);
   double tmp150_ = (tmp146_) * tmp9_;
   double tmp151_ = tmp149_ + tmp150_;
   double tmp152_ = (tmp151_) * (tmp8_);
   double tmp153_ = (tmp146_) * tmp10_;
   double tmp154_ = tmp152_ + tmp153_;
   double tmp155_ = (tmp154_) * (tmp8_);
   double tmp156_ = (tmp146_) * tmp11_;
   double tmp157_ = tmp155_ + tmp156_;
   double tmp158_ = (tmp157_) * (tmp8_);
   double tmp159_ = (tmp146_) * tmp12_;
   double tmp160_ = tmp158_ + tmp159_;
   double tmp161_ = (tmp160_) * (tmp8_);
   double tmp162_ = (tmp146_) * tmp13_;
   double tmp163_ = tmp161_ + tmp162_;
   double tmp164_ = (tmp163_) * (tmp8_);
   double tmp165_ = (tmp146_) * tmp14_;
   double tmp166_ = tmp164_ + tmp165_;
   double tmp167_ = (tmp166_) * (tmp8_);
   double tmp168_ = (tmp146_) * tmp15_;
   double tmp169_ = tmp167_ + tmp168_;
   double tmp170_ = mCompCoord[26];
   double tmp171_ = mCompCoord[32];
   double tmp172_ = tmp60_ * (tmp2_);
   double tmp173_ = (tmp146_) * (tmp2_);
   double tmp174_ = (tmp146_) * (tmp5_);
   double tmp175_ = tmp132_ + tmp174_;
   double tmp176_ = mCompCoord[41];
   double tmp177_ = tmp172_ * (tmp2_);
   double tmp178_ = tmp173_ * (tmp2_);
   double tmp179_ = (tmp175_) * (tmp2_);
   double tmp180_ = (tmp175_) * (tmp5_);
   double tmp181_ = tmp143_ + tmp180_;
   double tmp182_ = (tmp29_) * tmp25_;
   double tmp183_ = mCompCoord[51];
   double tmp184_ = 2 * tmp6_;
   double tmp185_ = tmp8_ + tmp184_;
   double tmp186_ = tmp22_ * (tmp2_);
   double tmp187_ = tmp23_ * (tmp2_);
   double tmp188_ = tmp24_ * (tmp2_);
   double tmp189_ = tmp25_ * (tmp2_);
   double tmp190_ = (tmp5_) * tmp25_;
   double tmp191_ = tmp6_ * (tmp2_);
   double tmp192_ = tmp191_ * (tmp2_);
   double tmp193_ = (tmp61_) * tmp30_;
   double tmp194_ = (tmp63_) * tmp32_;
   double tmp195_ = tmp193_ + tmp194_;
   double tmp196_ = (tmp66_) * tmp35_;
   double tmp197_ = tmp195_ + tmp196_;
   double tmp198_ = (tmp69_) * tmp38_;
   double tmp199_ = tmp197_ + tmp198_;
   double tmp200_ = (tmp72_) * tmp41_;
   double tmp201_ = tmp199_ + tmp200_;
   double tmp202_ = (tmp75_) * tmp44_;
   double tmp203_ = tmp201_ + tmp202_;
   double tmp204_ = (tmp78_) * tmp47_;
   double tmp205_ = tmp203_ + tmp204_;
   double tmp206_ = (tmp81_) * tmp50_;
   double tmp207_ = tmp205_ + tmp206_;
   double tmp208_ = (tmp84_) * tmp53_;
   double tmp209_ = tmp207_ + tmp208_;
   double tmp210_ = (tmp84_) * (tmp8_);
   double tmp211_ = (tmp61_) * tmp16_;
   double tmp212_ = tmp210_ + tmp211_;
   double tmp213_ = (tmp212_) * tmp57_;
   double tmp214_ = tmp209_ + tmp213_;
   double tmp215_ = tmp85_ * 2;
   double tmp216_ = tmp88_ * 2;
   double tmp217_ = tmp216_ * 2;
   double tmp218_ = tmp217_ * tmp17_;
   double tmp219_ = 4 * tmp7_;
   double tmp220_ = tmp8_ + tmp219_;
   double tmp221_ = tmp92_ * (tmp220_);
   double tmp222_ = tmp218_ + tmp221_;
   double tmp223_ = tmp98_ * 2;
   double tmp224_ = tmp223_ * 3;
   double tmp225_ = tmp224_ * tmp17_;
   double tmp226_ = 6 * tmp7_;
   double tmp227_ = tmp8_ + tmp226_;
   double tmp228_ = tmp102_ * (tmp227_);
   double tmp229_ = tmp225_ + tmp228_;
   double tmp230_ = tmp107_ * 2;
   double tmp231_ = tmp230_ * 4;
   double tmp232_ = tmp231_ * tmp17_;
   double tmp233_ = 8 * tmp7_;
   double tmp234_ = tmp8_ + tmp233_;
   double tmp235_ = tmp111_ * (tmp234_);
   double tmp236_ = tmp232_ + tmp235_;
   double tmp237_ = tmp116_ * 2;
   double tmp238_ = tmp237_ * 5;
   double tmp239_ = tmp238_ * tmp17_;
   double tmp240_ = 10 * tmp7_;
   double tmp241_ = tmp8_ + tmp240_;
   double tmp242_ = tmp120_ * (tmp241_);
   double tmp243_ = tmp239_ + tmp242_;
   double tmp244_ = (tmp29_) * tmp170_;
   double tmp245_ = mCompCoord[27];
   double tmp246_ = mCompCoord[29];
   double tmp247_ = mCompCoord[31];
   double tmp248_ = (tmp61_) * (tmp2_);
   double tmp249_ = (tmp29_) * tmp6_;
   double tmp250_ = tmp248_ + tmp249_;
   double tmp251_ = mCompCoord[34];
   double tmp252_ = mCompCoord[36];
   double tmp253_ = mCompCoord[38];
   double tmp254_ = mCompCoord[40];
   double tmp255_ = (tmp250_) * (tmp2_);
   double tmp256_ = (tmp29_) * tmp191_;
   double tmp257_ = tmp255_ + tmp256_;
   double tmp258_ = mCompCoord[42];
   double tmp259_ = (tmp137_) * (tmp2_);
   double tmp260_ = (tmp29_) * tmp22_;
   double tmp261_ = tmp259_ + tmp260_;
   double tmp262_ = mCompCoord[44];
   double tmp263_ = (tmp141_) * (tmp2_);
   double tmp264_ = (tmp29_) * tmp23_;
   double tmp265_ = tmp263_ + tmp264_;
   double tmp266_ = mCompCoord[46];
   double tmp267_ = tmp143_ * (tmp2_);
   double tmp268_ = (tmp29_) * tmp24_;
   double tmp269_ = tmp267_ + tmp268_;
   double tmp270_ = mCompCoord[48];
   double tmp271_ = mCompCoord[50];
   double tmp272_ = (tmp29_) * (tmp59_);
   double tmp273_ = (tmp146_) * tmp30_;
   double tmp274_ = (tmp148_) * tmp32_;
   double tmp275_ = tmp273_ + tmp274_;
   double tmp276_ = (tmp151_) * tmp35_;
   double tmp277_ = tmp275_ + tmp276_;
   double tmp278_ = (tmp154_) * tmp38_;
   double tmp279_ = tmp277_ + tmp278_;
   double tmp280_ = (tmp157_) * tmp41_;
   double tmp281_ = tmp279_ + tmp280_;
   double tmp282_ = (tmp160_) * tmp44_;
   double tmp283_ = tmp281_ + tmp282_;
   double tmp284_ = (tmp163_) * tmp47_;
   double tmp285_ = tmp283_ + tmp284_;
   double tmp286_ = (tmp166_) * tmp50_;
   double tmp287_ = tmp285_ + tmp286_;
   double tmp288_ = (tmp169_) * tmp53_;
   double tmp289_ = tmp287_ + tmp288_;
   double tmp290_ = (tmp169_) * (tmp8_);
   double tmp291_ = (tmp146_) * tmp16_;
   double tmp292_ = tmp290_ + tmp291_;
   double tmp293_ = (tmp292_) * tmp57_;
   double tmp294_ = tmp289_ + tmp293_;
   double tmp295_ = mCompCoord[33];
   double tmp296_ = tmp177_ * (tmp2_);
   double tmp297_ = tmp178_ * (tmp2_);
   double tmp298_ = tmp179_ * (tmp2_);
   double tmp299_ = (tmp181_) * (tmp2_);
   double tmp300_ = (tmp181_) * (tmp5_);
   double tmp301_ = tmp182_ + tmp300_;
   double tmp302_ = mCompCoord[52];
   double tmp303_ = 2 * tmp17_;
   double tmp304_ = tmp303_ * mLocFishEye_10_5_5_State_0_0;
   double tmp305_ = 2 * tmp7_;
   double tmp306_ = tmp8_ + tmp305_;
   double tmp307_ = 4.000000 * tmp17_;
   double tmp308_ = tmp307_ * (tmp8_);
   double tmp309_ = tmp308_ * mLocFishEye_10_5_5_State_0_0;
   double tmp310_ = 6.000000 * tmp17_;
   double tmp311_ = tmp310_ * tmp9_;
   double tmp312_ = tmp311_ * mLocFishEye_10_5_5_State_0_0;
   double tmp313_ = 8.000000 * tmp17_;
   double tmp314_ = tmp313_ * tmp10_;
   double tmp315_ = tmp314_ * mLocFishEye_10_5_5_State_0_0;
   double tmp316_ = 10.000000 * tmp17_;
   double tmp317_ = tmp316_ * tmp11_;
   double tmp318_ = tmp317_ * mLocFishEye_10_5_5_State_0_0;
   double tmp319_ = (tmp2_) * mLocFishEye_10_5_5_State_0_0;
   double tmp320_ = tmp19_ * mLocFishEye_10_5_5_State_0_0;
   double tmp321_ = tmp20_ * mLocFishEye_10_5_5_State_0_0;
   double tmp322_ = tmp21_ * mLocFishEye_10_5_5_State_0_0;
   double tmp323_ = tmp22_ * mLocFishEye_10_5_5_State_0_0;
   double tmp324_ = tmp23_ * mLocFishEye_10_5_5_State_0_0;
   double tmp325_ = tmp24_ * mLocFishEye_10_5_5_State_0_0;
   double tmp326_ = tmp192_ * (tmp2_);
   double tmp327_ = tmp186_ * mLocFishEye_10_5_5_State_0_0;
   double tmp328_ = tmp187_ * mLocFishEye_10_5_5_State_0_0;
   double tmp329_ = tmp188_ * mLocFishEye_10_5_5_State_0_0;
   double tmp330_ = tmp189_ * mLocFishEye_10_5_5_State_0_0;
   double tmp331_ = tmp190_ * mLocFishEye_10_5_5_State_0_0;

  mVal[0] = (tmp0_ + (tmp2_ + (tmp2_) * (tmp59_) + tmp85_ * (tmp185_) + tmp87_ * tmp17_ + (tmp8_) * (tmp96_) + tmp9_ * (tmp106_) + tmp10_ * (tmp115_) + tmp11_ * (tmp124_) + tmp125_ * (tmp2_) + tmp170_ * (tmp5_) + tmp126_ * tmp19_ + tmp127_ * tmp20_ + tmp171_ * tmp21_ + tmp131_ * tmp22_ + tmp133_ * tmp23_ + tmp134_ * tmp24_ + tmp176_ * tmp25_ + tmp138_ * tmp186_ + tmp142_ * tmp187_ + tmp144_ * tmp188_ + tmp145_ * tmp189_ + tmp183_ * tmp190_) * mLocFishEye_10_5_5_State_0_0) - mLocRegDistKnownVal_x;

  mCompDer[0][0] = 0;
  mCompDer[0][1] = 0;
  mCompDer[0][2] = 0;
  mCompDer[0][3] = 1 + (tmp29_ + tmp272_ + (tmp214_) * (tmp2_) + (tmp61_ + (tmp61_) * 2) * tmp85_ + tmp97_ * tmp87_ + (tmp61_) * (tmp96_) + ((tmp61_ + (tmp61_) * 4) * tmp88_ + tmp97_ * tmp94_) * (tmp8_) + (tmp63_) * (tmp106_) + ((tmp61_ + (tmp61_) * 6) * tmp98_ + tmp97_ * tmp104_) * tmp9_ + (tmp66_) * (tmp115_) + ((tmp61_ + (tmp61_) * 8) * tmp107_ + tmp97_ * tmp113_) * tmp10_ + (tmp69_) * (tmp124_) + ((tmp61_ + (tmp61_) * 10) * tmp116_ + tmp97_ * tmp122_) * tmp11_ + (tmp29_) * tmp125_ + (tmp130_) * tmp126_ + tmp132_ * tmp127_ + (tmp137_) * tmp131_ + (tmp141_) * tmp133_ + tmp143_ * tmp134_ + (tmp261_) * tmp138_ + (tmp265_) * tmp142_ + (tmp269_) * tmp144_ + tmp182_ * tmp145_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[0][4] = ((tmp294_) * (tmp2_) + (tmp146_) * tmp85_ + tmp60_ * tmp87_ + (tmp146_) * (tmp96_) + ((tmp146_) * tmp88_ + tmp60_ * tmp94_) * (tmp8_) + (tmp148_) * (tmp106_) + ((tmp146_) * tmp98_ + tmp60_ * tmp104_) * tmp9_ + (tmp151_) * (tmp115_) + ((tmp146_) * tmp107_ + tmp60_ * tmp113_) * tmp10_ + (tmp154_) * (tmp124_) + ((tmp146_) * tmp116_ + tmp60_ * tmp122_) * tmp11_ + tmp244_ + tmp172_ * tmp126_ + tmp173_ * tmp127_ + (tmp175_) * tmp171_ + tmp177_ * tmp131_ + tmp178_ * tmp133_ + tmp179_ * tmp134_ + (tmp181_) * tmp176_ + tmp296_ * tmp138_ + tmp297_ * tmp142_ + tmp298_ * tmp144_ + tmp299_ * tmp145_ + (tmp301_) * tmp183_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[0][5] = (tmp8_) * (tmp2_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[0][6] = tmp9_ * (tmp2_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[0][7] = tmp10_ * (tmp2_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[0][8] = tmp11_ * (tmp2_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[0][9] = tmp12_ * (tmp2_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[0][10] = tmp13_ * (tmp2_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[0][11] = tmp14_ * (tmp2_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[0][12] = tmp15_ * (tmp2_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[0][13] = tmp16_ * (tmp2_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[0][14] = tmp56_ * (tmp2_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[0][15] = (tmp185_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[0][16] = tmp304_;
  mCompDer[0][17] = (tmp90_) * (tmp8_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[0][18] = tmp309_;
  mCompDer[0][19] = (tmp100_) * tmp9_ * mLocFishEye_10_5_5_State_0_0;
  mCompDer[0][20] = tmp312_;
  mCompDer[0][21] = (tmp109_) * tmp10_ * mLocFishEye_10_5_5_State_0_0;
  mCompDer[0][22] = tmp315_;
  mCompDer[0][23] = (tmp118_) * tmp11_ * mLocFishEye_10_5_5_State_0_0;
  mCompDer[0][24] = tmp318_;
  mCompDer[0][25] = tmp319_;
  mCompDer[0][26] = (tmp5_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[0][27] = 0;
  mCompDer[0][28] = tmp320_;
  mCompDer[0][29] = 0;
  mCompDer[0][30] = tmp321_;
  mCompDer[0][31] = 0;
  mCompDer[0][32] = tmp322_;
  mCompDer[0][33] = 0;
  mCompDer[0][34] = 0;
  mCompDer[0][35] = tmp323_;
  mCompDer[0][36] = 0;
  mCompDer[0][37] = tmp324_;
  mCompDer[0][38] = 0;
  mCompDer[0][39] = tmp325_;
  mCompDer[0][40] = 0;
  mCompDer[0][41] = tmp25_ * mLocFishEye_10_5_5_State_0_0;
  mCompDer[0][42] = 0;
  mCompDer[0][43] = tmp327_;
  mCompDer[0][44] = 0;
  mCompDer[0][45] = tmp328_;
  mCompDer[0][46] = 0;
  mCompDer[0][47] = tmp329_;
  mCompDer[0][48] = 0;
  mCompDer[0][49] = tmp330_;
  mCompDer[0][50] = 0;
  mCompDer[0][51] = tmp331_;
  mCompDer[0][52] = 0;
  mVal[1] = (tmp3_ + (tmp5_ + (tmp5_) * (tmp59_) + tmp215_ * tmp17_ + tmp86_ * (tmp306_) + (tmp8_) * (tmp222_) + tmp9_ * (tmp229_) + tmp10_ * (tmp236_) + tmp11_ * (tmp243_) + tmp170_ * (tmp2_) + tmp245_ * tmp191_ + tmp246_ * tmp19_ + tmp247_ * tmp20_ + tmp295_ * tmp21_ + tmp251_ * tmp192_ + tmp252_ * tmp22_ + tmp253_ * tmp23_ + tmp254_ * tmp24_ + tmp258_ * tmp326_ + tmp262_ * tmp186_ + tmp266_ * tmp187_ + tmp270_ * tmp188_ + tmp271_ * tmp189_ + tmp302_ * tmp190_) * mLocFishEye_10_5_5_State_0_0) - mLocRegDistKnownVal_y;

  mCompDer[1][0] = 0;
  mCompDer[1][1] = 0;
  mCompDer[1][2] = 0;
  mCompDer[1][3] = ((tmp214_) * (tmp5_) + tmp97_ * tmp215_ + (tmp61_) * tmp86_ + (tmp61_) * (tmp222_) + (tmp97_ * tmp217_ + (tmp61_) * tmp92_) * (tmp8_) + (tmp63_) * (tmp229_) + (tmp97_ * tmp224_ + (tmp61_) * tmp102_) * tmp9_ + (tmp66_) * (tmp236_) + (tmp97_ * tmp231_ + (tmp61_) * tmp111_) * tmp10_ + (tmp69_) * (tmp243_) + (tmp97_ * tmp238_ + (tmp61_) * tmp120_) * tmp11_ + tmp244_ + (tmp250_) * tmp245_ + (tmp130_) * tmp246_ + tmp132_ * tmp247_ + (tmp257_) * tmp251_ + (tmp137_) * tmp252_ + (tmp141_) * tmp253_ + tmp143_ * tmp254_ + ((tmp257_) * (tmp2_) + (tmp29_) * tmp192_) * tmp258_ + (tmp261_) * tmp262_ + (tmp265_) * tmp266_ + (tmp269_) * tmp270_ + tmp182_ * tmp271_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[1][4] = 1 + (tmp29_ + tmp272_ + (tmp294_) * (tmp5_) + tmp60_ * tmp215_ + (tmp146_ + (tmp146_) * 2) * tmp86_ + (tmp146_) * (tmp222_) + (tmp60_ * tmp217_ + (tmp146_ + (tmp146_) * 4) * tmp92_) * (tmp8_) + (tmp148_) * (tmp229_) + (tmp60_ * tmp224_ + (tmp146_ + (tmp146_) * 6) * tmp102_) * tmp9_ + (tmp151_) * (tmp236_) + (tmp60_ * tmp231_ + (tmp146_ + (tmp146_) * 8) * tmp111_) * tmp10_ + (tmp154_) * (tmp243_) + (tmp60_ * tmp238_ + (tmp146_ + (tmp146_) * 10) * tmp120_) * tmp11_ + tmp172_ * tmp246_ + tmp173_ * tmp247_ + (tmp175_) * tmp295_ + tmp177_ * tmp252_ + tmp178_ * tmp253_ + tmp179_ * tmp254_ + tmp296_ * tmp262_ + tmp297_ * tmp266_ + tmp298_ * tmp270_ + tmp299_ * tmp271_ + (tmp301_) * tmp302_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[1][5] = (tmp8_) * (tmp5_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[1][6] = tmp9_ * (tmp5_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[1][7] = tmp10_ * (tmp5_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[1][8] = tmp11_ * (tmp5_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[1][9] = tmp12_ * (tmp5_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[1][10] = tmp13_ * (tmp5_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[1][11] = tmp14_ * (tmp5_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[1][12] = tmp15_ * (tmp5_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[1][13] = tmp16_ * (tmp5_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[1][14] = tmp56_ * (tmp5_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[1][15] = tmp304_;
  mCompDer[1][16] = (tmp306_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[1][17] = tmp309_;
  mCompDer[1][18] = (tmp220_) * (tmp8_) * mLocFishEye_10_5_5_State_0_0;
  mCompDer[1][19] = tmp312_;
  mCompDer[1][20] = (tmp227_) * tmp9_ * mLocFishEye_10_5_5_State_0_0;
  mCompDer[1][21] = tmp315_;
  mCompDer[1][22] = (tmp234_) * tmp10_ * mLocFishEye_10_5_5_State_0_0;
  mCompDer[1][23] = tmp318_;
  mCompDer[1][24] = (tmp241_) * tmp11_ * mLocFishEye_10_5_5_State_0_0;
  mCompDer[1][25] = 0;
  mCompDer[1][26] = tmp319_;
  mCompDer[1][27] = tmp191_ * mLocFishEye_10_5_5_State_0_0;
  mCompDer[1][28] = 0;
  mCompDer[1][29] = tmp320_;
  mCompDer[1][30] = 0;
  mCompDer[1][31] = tmp321_;
  mCompDer[1][32] = 0;
  mCompDer[1][33] = tmp322_;
  mCompDer[1][34] = tmp192_ * mLocFishEye_10_5_5_State_0_0;
  mCompDer[1][35] = 0;
  mCompDer[1][36] = tmp323_;
  mCompDer[1][37] = 0;
  mCompDer[1][38] = tmp324_;
  mCompDer[1][39] = 0;
  mCompDer[1][40] = tmp325_;
  mCompDer[1][41] = 0;
  mCompDer[1][42] = tmp326_ * mLocFishEye_10_5_5_State_0_0;
  mCompDer[1][43] = 0;
  mCompDer[1][44] = tmp327_;
  mCompDer[1][45] = 0;
  mCompDer[1][46] = tmp328_;
  mCompDer[1][47] = 0;
  mCompDer[1][48] = tmp329_;
  mCompDer[1][49] = 0;
  mCompDer[1][50] = tmp330_;
  mCompDer[1][51] = 0;
  mCompDer[1][52] = tmp331_;
}


void cREgDistVal_FishEye_10_5_5::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cREgDistVal_FishEye_10_5_5 Has no Der Sec");
}

void cREgDistVal_FishEye_10_5_5::SetFishEye_10_5_5_State_0_0(double aVal){ mLocFishEye_10_5_5_State_0_0 = aVal;}
void cREgDistVal_FishEye_10_5_5::SetRegDistKnownVal_x(double aVal){ mLocRegDistKnownVal_x = aVal;}
void cREgDistVal_FishEye_10_5_5::SetRegDistKnownVal_y(double aVal){ mLocRegDistKnownVal_y = aVal;}
void cREgDistVal_FishEye_10_5_5::SetRegDistValP1_x(double aVal){ mLocRegDistValP1_x = aVal;}
void cREgDistVal_FishEye_10_5_5::SetRegDistValP1_y(double aVal){ mLocRegDistValP1_y = aVal;}



double * cREgDistVal_FishEye_10_5_5::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "FishEye_10_5_5_State_0_0") return & mLocFishEye_10_5_5_State_0_0;
   if (aName == "RegDistKnownVal_x") return & mLocRegDistKnownVal_x;
   if (aName == "RegDistKnownVal_y") return & mLocRegDistKnownVal_y;
   if (aName == "RegDistValP1_x") return & mLocRegDistValP1_x;
   if (aName == "RegDistValP1_y") return & mLocRegDistValP1_y;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cREgDistVal_FishEye_10_5_5::mTheAuto("cREgDistVal_FishEye_10_5_5",cREgDistVal_FishEye_10_5_5::Alloc);


cElCompiledFonc *  cREgDistVal_FishEye_10_5_5::Alloc()
{  return new cREgDistVal_FishEye_10_5_5();
}


