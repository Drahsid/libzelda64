#ifndef SKYSPHEREOBJ_H
#define SKYSPHEREOBJ_H

#include <inttypes.h>

/* Display Lists * * * */
     #define   DL_BIRDSEYECLOUDSTOP     (uint32_t)(zobj+1308)
     #define   DL_BIRDSEYECLOUDSBOTTOM     (uint32_t)(zobj+1368)
     #define   DL_SKY     (uint32_t)(zobj+1624)
     #define   DL_OUTERCLOUD     (uint32_t)(zobj+2268)
     #define   DL_INNERCLOUD     (uint32_t)(zobj+2450)

/* Collisions * * * */

uint32_t zobj[]={0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xEFFFFFFF,0xDFDFFFFF,0xFF000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x000000EF,0xFFFFFFFF,0xFFFFFFFF,0xFFFF0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x0000CFFF,0xFFEFFFFF,0xFFEFEFEF,0xFFFF0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xEFFF0000,0x00DFFFFF,0x00000000,0x00000000,0x00000000,0x00000000,0x000000EF,0xEFDFEFFF,0xEFEFDFEF,0xFFFFDF00,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xEFFFFFFF,0xFFEFFFFF,0xFFEF0000,0x00000000,0x00000000,0x00000000,0x000000DF,0xDFEFEFEF,0xEFFFEFEF,0xFFFFDF00,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xDFDFEFFF,0xFFFFFFFF,0xFFFFFFCF,0x00000000,0x00000000,0x0000DFEF,0xBF00DFEF,0xDFEFEFDF,0xDFFFFFEF,0xEFDF0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00CFDFFF,0xFFFFFFFF,0xFFFFFFFF,0x00000000,0x00000000,0x0000FFFF,0xFFFFFFEF,0xDFEFFFFF,0xFFFFFFDF,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00DF0000,0x00BFDFEF,0xFFFFFFFF,0xFFFFFFFF,0xFF000000,0x00000000,0x0000FFEF,0xDFDFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00FFFFBF,0x0000CFDF,0xDFDFDFDF,0xFFFFFFFF,0xFFDF0000,0x00000000,0x00000000,0x0000FFFF,0xFFFFFFFF,0xFFFFFFFF,0x00CF0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xFFFFDF00,0x000000CF,0xCFCFCFDF,0xEFFFFFFF,0xFFFF0000,0xEFFFFFEF,0x00000000,0x00CFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFCF00,0x00000000,0x00000000,0x00000000,0x00000000,0x000000DF,0xFFDFDF00,0x00000000,0xBFBFCFDF,0xEFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00000000,0x00EFDFDF,0xDFDFDFEF,0xFFFFFFFF,0xFFFFCFCF,0x00000000,0x00000000,0x00000000,0x00000000,0xEFDFEFCF,0xCFCFCF00,0x00000000,0x0000CFDF,0xEFFFFFFF,0xFFFFFFFF,0xFFFFFF00,0x00000000,0x000000BF,0xCFCFCFDF,0xDFFFFFFF,0xFFFFDFFF,0xFFFF0000,0x00DFFF00,0x00000000,0x00000000,0xDFCF0000,0x00000000,0x00000000,0x0000BFDF,0xEFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0x00000000,0x000000CF,0xDFCFCFCF,0xDFEFFFFF,0xFFFFFFFF,0xFFFFFF00,0xCFFFFF00,0x00000000,0x00DFFFEF,0xBF000000,0x0000BFBF,0x00000000,0x0000BFCF,0xDFEFDFDF,0xEFFFFFFF,0xFFFFFFFF,0xFFEF0000,0x00000000,0x0000DFBF,0xCFDFFFFF,0xFFFFFFFF,0xFFFFFFDF,0xEFFFCF00,0x00000000,0x00DFFFFF,0xDF000000,0x0000BFCF,0xCFBF0000,0x000000BF,0xCFCFCFCF,0xDFDFFFFF,0xFFFFFFFF,0xFFFF0000,0x00000000,0x00000000,0xBFCFFFFF,0xFFEFCF00,0x00CFFFFF,0xFFFF0000,0x000000CF,0x00BFDFEF,0xCF000000,0x000000BF,0xCFBF0000,0x00000000,0xBFBFCFCF,0xDFDFEFFF,0xFFEFEFFF,0xEF000000,0x00000000,0xCF000000,0x0000BFEF,0xFFFF0000,0x0000BFCF,0xDFDF0000,0x00000000,0xFFEFCFDF,0xCF000000,0x00000000,0x00000000,0x00000000,0xCFCFCFDF,0xDFDFDFDF,0xDFDFDFFF,0xEF00FFDF,0xEFEF0000,0x00000000,0x00000000,0x00CF0000,0x00000000,0x00000000,0x00CFEFDF,0xEFFFDFBF,0xDFDF0000,0x00000000,0x00000000,0x000000BF,0xCFCFCFDF,0xDFDFDFEF,0xDFDFEFFF,0xFFFFFFFF,0xFFFF0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x0000EFFF,0xFFDF0000,0xBFCF0000,0x00000000,0x00000000,0x000000CF,0xCFCFDFDF,0xDFDFDFEF,0xEFEFEFFF,0xFFFFFFFF,0xFFFF0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xEFBF0000,0x00000000,0x00000000,0x00000000,0x0000BFCF,0xDFDFDFDF,0xDFDFEFEF,0xEFFFFFEF,0xEFFFEFEF,0xFFFF0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x000000CF,0xCF000000,0x00000000,0x000000DF,0xEFDF0000,0xFFFFEFFF,0xFFEFEFEF,0xEFFFDF00,0xBF000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x000000CF,0xCF000000,0x00000000,0x00000000,0x00000000,0xEFFFFFEF,0x0000BFDF,0xDFCF0000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00DFCFCF,0xDF000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x0000CFFF,0xFFFFDF00,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xFFEFDFDF,0xDFFFFF00,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x000000DF,0xFFEFCFEF,0xFFFFEF00,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x0000DFEF,0xEFDFEFEF,0xEFFFFFEF,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xDFDFEFFF,0xEFDFEFEF,0xFFFFDF00,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00DFDFEF,0xFFFFEFDF,0xDFCFCFEF,0xFFFFDF00,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x000000DF,0x00000000,0x00000000,0xDF000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00123224,0x33330000,0x00050005,0x05000500,0x00100000,0x00000000,0x00000000,0x00000000,0x00113332,0x23305550,0x00500050,0x50005005,0x00000000,0x00000000,0x00000000,0x00000210,0x00011133,0x33115505,0x00505005,0x55555500,0x00000000,0x00000000,0x00000000,0x10001421,0x00000113,0x11315055,0x05050555,0x55555550,0x55000000,0x50100000,0x00000000,0x11134623,0x10001031,0x11115000,0x05505555,0x55555050,0x00500000,0x01111000,0x00000010,0x12266662,0x11100111,0x11317555,0x50555555,0x55550505,0x50050050,0x55173710,0x00000051,0x33646643,0x31501550,0x13731515,0x57555555,0x57555550,0x55050505,0x55137770,0x00000051,0x13466423,0x51501551,0x17737705,0x71755575,0x75755555,0x55505050,0x05151151,0x00500505,0x33424221,0x10015010,0x11115055,0x51155715,0x57575755,0x55555555,0x50050550,0x50555551,0x73222335,0x55501101,0x11155555,0x57577157,0x77555755,0x55755550,0x55550550,0x55175113,0x78643115,0x55010111,0x55555555,0x55555777,0x57575557,0x55555555,0x55555555,0x01153998,0x72462101,0x50555555,0x75555555,0x57777577,0x77757775,0x55755555,0x55555555,0x11129648,0x82464311,0x55555557,0x55715533,0x87777777,0x77777557,0x57557575,0x57555575,0x22449448,0x72246233,0x55555575,0x57513448,0x77577778,0x77777757,0x77757775,0x75755557,0x34492283,0x73342493,0x17557117,0x11336498,0x73787787,0x88777777,0x77577577,0x77577555,0x37888878,0x31722299,0x37775538,0x94444447,0x87878888,0x77777787,0x77777777,0x57777777,0x17787877,0x87337888,0x87777829,0x49444288,0x78787888,0x88878887,0x77787777,0x77777777,0x71877777,0x89888777,0x73777878,0x28388878,0x77878888,0x88888888,0x87878778,0x77778777,0x77777322,0x99928887,0x77783383,0x78388787,0x88888888,0x88888887,0x88787888,0x87777837,0x77877999,0xAA9A6488,0x78773778,0x88888888,0x88888898,0x88899882,0x88888888,0x88888333,0x788896BB,0xCBBABB99,0x78888888,0x88888889,0x89899989,0x99888992,0x98888888,0x28888889,0x98884BCD,0xBCBBAABA,0x98888888,0x88988888,0x99899999,0x999999A9,0x89989899,0x999A9696,0x922896BB,0xAAA66AAA,0x98999899,0x89898989,0x89999999,0x99999999,0x98989999,0x964ABBCC,0xCCB6469A,0x99499964,0x9A9A9A99,0xA6949499,0x99999999,0x9A999999,0x99999998,0x92ABBCBE,0xCCCECAA9,0x98989899,0x9996BAAA,0xBBBB9A99,0x99A9A9A9,0x99A9A9A9,0x99999A9A,0x969AA6A6,0xAAAB6699,0x99999A99,0x99AABAAA,0x6AA9A9A9,0x999A9A9A,0xAAABBAA9,0xA9ABBABA,0xA9A669AA,0x9AA9A969,0xB9A9A999,0xA99A6AAA,0xAA9AAA9A,0x9AA9AABC,0xCDDCDDBB,0xAABACCCD,0xCBCABBBA,0xA9A9AABC,0xAA9A6BBB,0xBBCCCCBC,0xBBBAAACB,0xCBCBABBB,0xBBBBBBCC,0xCCBBCBCB,0xBBABCBBB,0xAAAAAAAA,0xCBABCDCC,0xCBBBCBCB,0xCCCCBBCC,0xCDCCCBBB,0xBBBCBBCB,0xCCCCCCCC,0xBABABBBB,0xBBABBABA,0xCCCCCCCB,0xCCDCCCCB,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCECCDDC,0xCCCDCDDD,0xDDDCCCCC,0xDCDDDDDD,0xDDCDDDCD,0xDCDCCDDD,0xDDDDDDDD,0xCDCDDCDC,0xDDDDDDDD,0xCDDCEDDD,0xDDDDDDDD,0xDEDDDDDD,0xDDDDDDDD,0xDEDDDDDD,0xDDDDDDDD,0xDDDDDDDE,0xDDEDDDDD,0xDDDDDDDD,0xEDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xEDEDDDDD,0xDDDDDEDD,0xDEDDDDDD,0xEDDDDDDD,0xDDEDEDED,0xDEDDDDDD,0xDDDCCCCD,0xCDDDDDDD,0xDDDDDDDC,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDC,0xDCDCDDDD,0xDCCDCDCD,0xCDCDCDDC,0xDCDDCDDD,0xDDCDCDCD,0xCDDDCCDD,0xDCDDDCDD,0xDCCCCDDD,0xCDCDDDDD,0xCCCDCCDC,0xDCCCDCDC,0xCCDCDDCD,0xCCDCCDCC,0xDCCCCDCD,0xCCCCCDCC,0xCDCDCCCC,0xCCDCDCDC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCBCB,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCD,0xCCBCCCCC,0xCBCCCBCC,0xCCCCCCCC,0xBCCCCCCC,0xCCBCCCCC,0xCCCCCBCC,0xCCBCCCCC,0xCCCCCBCB,0xBBCBCCBB,0xBCBCBCCB,0xCBBBBCBC,0xBCCBBBCC,0xBBCBBBBB,0xBCCBBCCB,0xCBCCBBBC,0xBCBBCBBB,0xBBBBBBBB,0xBBBBBBBB,0xBBBBBBBB,0xBBBBBBBB,0xBBBBBBBB,0xBBBBBBBB,0xBBBBBBBB,0xBBBBBBBB,0xBABBBBAB,0xBABBBBAB,0xBBBABBAB,0xABBBBBBB,0xBBBBABBB,0xBBBBABBA,0xBABBABAB,0xABBBBBBB,0xBABAAABA,0xAB6BAAAB,0xA6BAABAB,0xA6BAAAAA,0xAAAABAB6,0xBAABAAAA,0xAB6BBAAA,0xBABAAAAA,0xAAAAAAAB,0xAAAAAAAA,0xBAAAAAAA,0xABAAAAAA,0xAAABAAAA,0xAAAABABA,0xAAAAABAB,0xAAAAAAAA,0xAAAA6AAA,0x6AAAA6AA,0x66AAAAAA,0xA6AAA6AA,0x6AA6A6A6,0x6AAA6A6A,0x6AA6A6A6,0xA6A6AA6A,0x6666A66A,0xAA666A66,0xA66A6A66,0x6A66666A,0x6A66AA66,0x6A66A6A6,0xA6A6A666,0x666A66A6,0x666A6A66,0x6666666A,0x6666A666,0x66666666,0x66A666A6,0x666A666A,0x66666666,0x6666A66A,0x66646466,0x66666666,0x66666666,0x66666666,0x66466664,0x66666666,0x66666666,0x64666666,0x66464646,0x64646644,0x66464646,0x44666666,0x64644466,0x66666646,0x66646446,0x46664644,0x44444464,0x64444444,0x46444464,0x44646446,0x46446446,0x44464446,0x44464644,0x44444646,0x44444444,0x44444444,0x44444444,0x44444444,0x44444444,0x44444444,0x44444444,0x44444444,0x44244244,0x24424444,0x42424424,0x42442424,0x24224242,0x44242424,0x24244244,0x42444442,0x42422422,0x42242242,0x44224242,0x24224242,0x22442424,0x24222422,0x42222442,0x44222424,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x23232232,0x33223232,0x22223222,0x32223222,0x32223232,0x23223232,0x22332223,0x22322223,0x32323233,0x23233333,0x23333233,0x23332333,0x23232322,0x33333333,0x23222322,0x32333232,0x33333333,0x33333333,0x33333333,0x33333133,0x33333331,0x33313333,0x13333333,0x33333333,0x33113331,0x33333131,0x33313131,0x31333313,0x13333333,0x13131331,0x33333333,0x31313331,0x11311313,0x13113131,0x33131313,0x13111133,0x31331111,0x31311133,0x13111311,0x11311113,0x11113111,0x11111113,0x11311113,0x11111111,0x11111131,0x11113111,0x11111111,0x11111111,0x11111111,0x11111111,0x11111111,0x11111111,0x11111111,0x11111111,0x11111111,0x11111111,0x10101010,0x10101111,0x11001111,0x01110010,0x11111111,0x01011010,0x11010101,0x01101110,0x01010101,0x01011115,0x10111105,0x10151101,0x10110155,0x15105101,0x01111111,0x11110151,0x01015005,0x50510101,0x01010110,0x51015501,0x01101001,0x50015010,0x10511050,0x01051001,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x01222222,0x33345500,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000002,0x67778422,0x24423338,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000089,0x99A76814,0x22244423,0x24000000,0x00000000,0x00000000,0x00000000,0x00000000,0x000001B6,0xA9AA7784,0x42118122,0x32258000,0x00000000,0x00000000,0x00000142,0x15000004,0x24424B84,0x86B67A7B,0x188B8114,0x4BB22332,0x20000000,0x00000000,0x00094442,0x22223496,0x7122486B,0x18BB6766,0x66BB8877,0x68BA9ACD,0x6A000000,0x00000000,0x00041444,0x244226CC,0x97841B66,0x77777766,0x76B8B7A7,0x66A9CCCD,0xDCCDE000,0x00000000,0x00D6B814,0x4441B9C9,0x997BB677,0x76666B81,0x1BB8B6BB,0xB67A9AAA,0x7A99C000,0x00000086,0xB5AA7684,0x4B7767AA,0xAB81111B,0xB4214442,0x448B1418,0xB8BAA9A6,0xBB7A8000,0x00009241,0x14BB8114,0x4A999711,0x61414224,0x41118811,0x11111118,0x88B7A76B,0xBB884000,0x0000AAB8,0x81144441,0xBA999ABB,0x77778814,0x44118B6B,0x1188BBBB,0x66766B88,0x84800000,0x000EDDAB,0xBB141188,0x7A99A99A,0x99AA76BB,0x84224118,0xB666B666,0x76B88BBB,0x84000000,0x00DDDDC9,0xA7781867,0x7669C999,0x99A7777B,0x11442224,0x188666BB,0x6B144411,0x21B18000,0x00CACCCC,0x99A68B67,0x7B88A9C9,0xAA999A77,0xB8122422,0x2244866B,0xB8814224,0x86BA9CE0,0x0000CCDC,0xCCAAA66A,0x96811B77,0xB1B767AA,0xA7811422,0x2241B666,0xB8881116,0xA76ACDD0,0x000000CC,0xDDCCCCCC,0xC9A76577,0x68111799,0xAAA7B144,0x4448666B,0xBBB8B8B7,0xAACCE900,0x000000CD,0xDDDDDEDD,0xDDDDDDDC,0xCC9AA999,0x99A9A76B,0x811BBB66,0xBBBB88BA,0x9DCCC830,0x0000EEEE,0xEDDDEEEE,0xEEEEEEEE,0xEDEDDCCA,0xA79C999A,0x78114441,0x14186B66,0x7AA82380,0x009DEEEE,0xEDEEEEEE,0xEEEEEEDE,0xEEEECAAA,0x99CCC999,0xA7B8B841,0x111867A6,0x18813000,0x0DDEEEED,0xDEEEEEEE,0xEEEEEDED,0xDDDDD99C,0xDDDCCC99,0xAA56B818,0x8BBBB8B8,0x42420000,0x0CDDC77D,0xEEEEEEEE,0xEEEEEEEE,0xDDCCDDDD,0xDDDDDCCC,0xA9A777B6,0x6B6BB888,0x12230000,0x001BCCCE,0xEEEEEEEE,0xEEEEEEEE,0xEDDDCDDD,0xDDDDDDCC,0xC999AA77,0x766B1181,0x42230000,0x0007CDEE,0xEEEEEEEE,0xEEEEEEEE,0xDEEDDCCD,0xDDDDDCDC,0xAA77776B,0x67784222,0x24230000,0x000000DC,0xDEEEEEEE,0xEEEEEEEE,0xDDDCC99D,0xDDDDDCCA,0x6B66B88B,0x677B1422,0x42200000,0x00000000,0x0DEEDEEC,0xDDCC9A77,0x777A999C,0xCCC999AB,0x1416B117,0x9A778444,0x22000000,0x00000000,0x0000000E,0xCCC97681,0x18188699,0xA669D997,0x1222442A,0x99A7B423,0x00000000,0x00000000,0x00000000,0x9CC99AB4,0x1442441B,0x811B6AA8,0x23240007,0x67768410,0x00000000,0x00000000,0x0000000D,0x9CDCA6B8,0x1118B842,0x44422300,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xEECD9B1B,0x84197B14,0x22442000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000614,0x4A006444,0x22200000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x436D5C2F,0x85356CB1,0x8D774BF1,0xA6395C77,0x653985FD,0xAEBBC73D,0xD77FDFFF,0xFFFF0000,0x0000D6F7,0xE77BFFFF,0xDF39C631,0xBE73B631,0xCEB59DAF,0xA5F1C675,0x956D84EB,0x74A90000,0x018C088B,0x03D3FF00,0x0C0205ED,0xE88ADAFF,0xF7B5088B,0x00C1FF00,0x02CEF94D,0x2D8AFDFF,0x02C4088B,0xFB71FF00,0xFDF004CC,0xE68A24FF,0xE7000000,0x00000000,0xE3001001,0x00008000,0xD7000002,0xFFFFFFFF,0xFD500000,(uint32_t)(zobj+1024),0xF5500000,0x07094260,0xE6000000,0x00000000,0xF3000000,0x071FF200,0xE7000000,0x00000000,0xF5400800,0x00094260,0xF2000000,0x000FC07C,0xFD100000,(uint32_t)(zobj+1288),0xE8000000,0x00000000,0xF5000100,0x07000000,0xE6000000,0x00000000,0xF0000000,0x0703C000,0xE7000000,0x00000000,0xFC11FFFF,0xFFFFF238,0xE200001C,0xC8113078,0xD9F1FFFF,0x00000000,0xD9FFFFFF,0x00810400,0xFA000000,0xFFFFFFFF,0x01003006,(uint32_t)(zobj+1296),0x05000204,0x00000000,0xDF000000,0x00000000,0x009B04E8,0x01C4FF00,0x0C0205ED,0xE88ADAFF,0xFD1D04E8,0x00E4FF00,0x02CEF94D,0x2D8AFEFF,0x010A04E8,0xFF5FFF00,0xFDF004CC,0xE48A22FF,0xE7000000,0x00000000,0xE3001001,0x00008000,0xD7000002,0xFFFFFFFF,0xFD500000,(uint32_t)(zobj+1024),0xF5500000,0x07094260,0xE6000000,0x00000000,0xF3000000,0x071FF200,0xE7000000,0x00000000,0xF5400800,0x00094260,0xF2000000,0x000FC07C,0xFD100000,(uint32_t)(zobj+1288),0xE8000000,0x00000000,0xF5000100,0x07000000,0xE6000000,0x00000000,0xF0000000,0x0703C000,0xE7000000,0x00000000,0xFC11FFFF,0xFFFFF238,0xE200001C,0xC8113078,0xD9F1FFFF,0x00000000,0xD9FFFFFF,0x00810400,0xFA000000,0xFFFFFFFF,0x01003006,(uint32_t)(zobj+1356),0x05000204,0x00000000,0xDF000000,0x00000000,0x0A33064E,0xEC99FF00,0xF9450561,0xC8DD6CFF,0x136703B5,0xF499FF00,0xFD6E04E6,0x94EC3FFF,0x0BFE0FB2,0xF499FF00,0xFD6E071C,0xBEA93FFF,0x0A33EF7F,0xF403FF00,0xFD20012C,0xC85B42FF,0x1367F64D,0xF8F4FF00,0xFFB2026D,0x943627FF,0x0BFEFA01,0xED8DFF00,0xF9C4031C,0xBE2166FF,0x0A33EF7F,0x0BFDFF00,0x0997012C,0xC85BBEFF,0x1367F64D,0x070CFF00,0x0705026D,0x9436D9FF,0x0BFEEC99,0x0000FF00,0x035B00A3,0xBE6C00FF,0x0A33064E,0x1367FF00,0x0D710561,0xC8DD94FF,0x136703B5,0x0B67FF00,0x094904E6,0x94ECC1FF,0x0BFEFA01,0x1273FF00,0x0CF3031C,0xBE219AFF,0x13670BFD,0x0000FF00,0x035B066D,0x94BE00FF,0x16CE0000,0x0000FF00,0x035B0437,0x810000FF,0x0BFE0FB2,0x0B67FF00,0x0949071C,0xBEA9C1FF,0x00000D68,0x1273FF00,0x0FFD07F3,0x00B59AFF,0x00000000,0x16CFFF00,0x13690437,0x000081FF,0x0000F298,0x1273FF00,0x0FFD007B,0x004999FF,0x0000EA4F,0x070CFF00,0x086CFEB0,0x0079DAFF,0x0000EA4F,0xF8F4FF00,0xFE4AFEB0,0x007926FF,0x0000F298,0xED8DFF00,0xF802007C,0x004967FF,0x00000000,0xE931FF00,0xF4970437,0x00007FFF,0x00000D68,0xED8DFF00,0xF80207F2,0x00B566FF,0xF5CD064E,0xEC99FF00,0xF9450561,0x38DD6CFF,0xF4020FB2,0xF499FF00,0xFD6E071C,0x42A93FFF,0xEC9903B5,0xF499FF00,0xFD6E04E6,0x6CEC3FFF,0xF5CDEF7F,0xF403FF00,0xFD20012C,0x385B42FF,0xF402FA01,0xED8DFF00,0xF9C4031C,0x422166FF,0xEC99F64D,0xF8F4FF00,0xFFB2026D,0x6C3627FF,0xF5CDEF7F,0x0BFDFF00,0x0997012C,0x385BBEFF,0xF402EC99,0x0000FF00,0x035B00A3,0x426C00FF,0xEC99F64D,0x070CFF00,0x0705026D,0x6C36D9FF,0xF5CD064E,0x1367FF00,0x0D710561,0x38DD94FF,0xF402FA01,0x1273FF00,0x0CF3031C,0x42219AFF,0xEC9903B5,0x0B67FF00,0x094904E6,0x6CECC1FF,0xEC990BFD,0x0000FF00,0x035B066D,0x6CBE00FF,0xE9310000,0x0000FF00,0x035B0437,0x7F0000FF,0xF4020FB2,0x0B67FF00,0x0949071C,0x42A9C1FF,0xEC99F64D,0xF8F4FF00,0xFFB2026D,0x6C3627FF,0xF5CDEF7F,0xF403FF00,0xFD20012C,0x385B42FF,0xEC9903B5,0xF499FF00,0xFD6E04E6,0x6CEC3FFF,0xF402FA01,0xED8DFF00,0xF9C4031C,0x422166FF,0xF5CD064E,0xEC99FF00,0xF9450561,0x38DD6CFF,0xF4020FB2,0xF499FF00,0xFD6E071C,0x42A93FFF,0x00000D68,0x1273FF00,0x0FFD07F3,0x00B59AFF,0x00000000,0x16CFFF00,0x13690437,0x000081FF,0x0000F298,0x1273FF00,0x0FFD007B,0x004999FF,0x0000EA4F,0x070CFF00,0x086CFEB0,0x0079DAFF,0x0000EA4F,0xF8F4FF00,0xFE4AFEB0,0x007926FF,0x0000F298,0xED8DFF00,0xF802007C,0x004967FF,0x00000000,0xE931FF00,0xF4970437,0x00007FFF,0x00000D68,0xED8DFF00,0xF80207F2,0x00B566FF,0xE7000000,0x00000000,0xE3001001,0x00008000,0xD7000002,0xFFFFFFFF,0xFD500000,(uint32_t)(zobj+512),0xF5500000,0x07018060,0xE6000000,0x00000000,0xF3000000,0x073FF200,0xE7000000,0x00000000,0xF5400800,0x00018060,0xF2000000,0x000FC0FC,0xFD100000,(uint32_t)(zobj+1280),0xE8000000,0x00000000,0xF5000100,0x07000000,0xE6000000,0x00000000,0xF0000000,0x0703C000,0xE7000000,0x00000000,0xFC11FFFF,0xFFFFFC38,0xE200001C,0xC8112078,0xD9F1FFFF,0x00000000,0xD9FFFFFF,0x00810400,0xFA000000,0xFFFFFFFF,0x0101D03A,(uint32_t)(zobj+1416),0x06000204,0x0006080A,0x060C0E10,0x00121416,0x06181A14,0x0018141C,0x061C1412,0x00141A0E,0x06140E16,0x00160E0C,0x060E1A08,0x000E0810,0x06100806,0x00081A02,0x0608020A,0x000A0200,0x06021A18,0x00021804,0x061E1C12,0x00201216,0x06201622,0x0022160C,0x06240C10,0x00241026,0x06261006,0x0028060A,0x06280A2A,0x002A0A00,0x062C0004,0x001E1220,0x06220C24,0x00260628,0x062A002C,0x002E3032,0x05343638,0x00000000,0x0101702E,(uint32_t)(zobj+1532),0x06000204,0x0006080A,0x060C0A0E,0x000C100A,0x0610060A,0x000A040E,0x060A0804,0x00080004,0x0604120E,0x00040212,0x06021412,0x0012160E,0x06121816,0x00181A16,0x06160C0E,0x00161C0C,0x061E0610,0x00200806,0x06202208,0x00220008,0x06240200,0x00242602,0x06261402,0x00281814,0x06282A18,0x002A1A18,0x062C1C1A,0x001E2006,0x06222400,0x00262814,0x052A2C1A,0x00000000,0xDF000000,0x00000000,0xF49E04CF,0xF977FF00,0x06400400,0x76032EFF,0xF5D50743,0xF870FF00,0x09EAFFF3,0x58CA48FF,0xF50807B1,0xFB0EFF00,0x02240000,0x6CC007FF,0xF49E04CF,0xF977FF00,0x06400400,0x71FC38FF,0xF50807B1,0xFB0EFF00,0x02240000,0x6ABB08FF,0xF4430494,0xFBAAFF00,0x00E30400,0x7D04F0FF,0xF4430494,0xFBAAFF00,0x00E30400,0x651E46FF,0xF50807B1,0xFB0EFF00,0x02240000,0x51D556FF,0xF3930708,0xFD18FF00,0xFDA8FFAE,0x77E621FF,0xF30A0468,0xFDFFFF00,0xFD4E03E3,0x7D110BFF,0xF3930708,0xFD18FF00,0xFDA2FFAE,0x70D427FF,0xF38C074A,0xFF8FFF00,0x00B50000,0x71CFE4FF,0xF30A0468,0xFDFFFF00,0xFD4E03E3,0x780226FF,0xF38C074A,0xFF8FFF00,0x00B50000,0x6CBF00FF,0xF30A0468,0x011FFF00,0x00DD0400,0x7802DAFF,0xF30A0468,0x011FFF00,0x00A40400,0x7D12F8FF,0xF38C074A,0xFF8FFF00,0x00B50000,0x71CF1CFF,0xF3930708,0x0269FF00,0x02CE0098,0x70D6D9FF,0xF43604B1,0x0383FF00,0x03A00400,0x6A29C8FF,0xF3930708,0x0269FF00,0x02CE0098,0x7AEEE5FF,0xF50E0794,0x04EBFF00,0x05C00000,0x57E4A9FF,0xF43604B1,0x0383FF00,0x03A00400,0x7E020AFF,0xF50E0794,0x04EBFF00,0x05C00000,0x6ABFE8FF,0xF4E804B1,0x068EFF00,0x06F70400,0x6D02C0FF,0xF4430494,0xFBAAFF00,0x00E30400,0x580B5AFF,0xF3930708,0xFD18FF00,0xFDA8FFAE,0x6BD433FF,0xF30A0468,0xFDFFFF00,0xFD5403E3,0x7B1116FF,0xF30A0468,0x011FFF00,0x00A40400,0x7B17EDFF,0xF3930708,0x0269FF00,0x02CE0098,0x6CDBCBFF,0xF43604B1,0x0383FF00,0x03A00400,0x5912A8FF,0xF4E804B1,0x068EFF00,0x06F20400,0x6F06C4FF,0xF50E0794,0x04EBFF00,0x05C50000,0x6CC2ECFF,0xF6460725,0x075EFF00,0x08C40098,0x4BCAAAFF,0x09AE0765,0xF24FFF00,0x06400400,0xD70378FF,0x0B2D0AD2,0xF3F1FF00,0x09EAFFF3,0xBCCA5BFF,0x077C0B6C,0xF2FAFF00,0x02240000,0xFDC06DFF,0x09AE0765,0xF24FFF00,0x06400400,0xCDFC74FF,0x077C0B6C,0xF2FAFF00,0x02240000,0xFCBB6AFF,0x06970713,0xF1F1FF00,0x00E30400,0x15047DFF,0x06970713,0xF1F1FF00,0x00E30400,0xBF1E68FF,0x077C0B6C,0xF2FAFF00,0x02240000,0xADD555FF,0x048D0A80,0xF112FF00,0xFDA8FFAE,0xE4E678FF,0x034306D5,0xF060FF00,0xFD4E03E3,0xFB117DFF,0x048D0A80,0xF112FF00,0xFDA2FFAE,0xDED471FF,0x011D0ADC,0xF12DFF00,0x00B50000,0x20CF70FF,0x034306D5,0xF060FF00,0xFD4E03E3,0xDF027AFF,0x011D0ADC,0xF12DFF00,0x00B50000,0x04BF6CFF,0xFEE806D5,0xF08FFF00,0x00DD0400,0x2B0277FF,0xFEE806D5,0xF08FFF00,0x00A40400,0x0E127CFF,0x011D0ADC,0xF12DFF00,0x00B50000,0xE8CF72FF,0xFD240A80,0xF162FF00,0x02CE0098,0x2CD66FFF,0xFBA5073C,0xF255FF00,0x03A00400,0x3C2967FF,0xFD240A80,0xF162FF00,0x02CE0098,0x21EE79FF,0xF9BA0B42,0xF397FF00,0x05C00000,0x5BE453FF,0xFBA5073C,0xF255FF00,0x03A00400,0xFB027EFF,0xF9BA0B42,0xF397FF00,0x05C00000,0x1CBF69FF,0xF770073C,0xF37CFF00,0x06F70400,0x45026AFF,0x06970713,0xF1F1FF00,0x00E30400,0xAA0B5BFF,0x048D0A80,0xF112FF00,0xFDA8FFAE,0xD2D46DFF,0x034306D5,0xF060FF00,0xFD5403E3,0xEF117CFF,0xFEE806D5,0xF08FFF00,0x00A40400,0x18177AFF,0xFD240A80,0xF162FF00,0x02CE0098,0x3ADB6AFF,0xFBA5073C,0xF255FF00,0x03A00400,0x5C1255FF,0xF770073C,0xF37CFF00,0x06F20400,0x41066CFF,0xF9BA0B42,0xF397FF00,0x05C50000,0x18C26BFF,0xF6630AA8,0xF570FF00,0x08C40098,0x59CA48FF,0x0E0D06AD,0x046DFF00,0x06400400,0x84F3EEFF,0x0C600A4F,0x053CFF00,0x09EAFFF3,0xA0B5DEFF,0x0CB109EB,0x0167FF00,0x02240000,0x9ABD21FF,0x0E0D06AD,0x046DFF00,0x06400400,0x87EAE5FF,0x0CB109EB,0x0167FF00,0x02240000,0x9DB820FF,0x0DF4058A,0x0183FF00,0x00E30400,0x890429FF,0x0DF4058A,0x0183FF00,0x00E30400,0x8D06CCFF,0x0CB109EB,0x0167FF00,0x02240000,0xA4BCCCFF,0x0E310850,0xFE87FF00,0xFDA8FFAE,0x87DA01FF,0x0EFF0477,0xFE25FF00,0xFD4E03E3,0x820A0BFF,0x0E310850,0xFE87FF00,0xFDA2FFAE,0x8FC700FF,0x0D8407B6,0xFB31FF00,0x00B50000,0x9CD53FFF,0x0EFF0477,0xFE25FF00,0xFD4E03E3,0x83F4F5FF,0x0D8407B6,0xFB31FF00,0x00B50000,0x9CBE28FF,0x0E210344,0xFA0BFF00,0x00DD0400,0x92093DFF,0x0E210344,0xFA0BFF00,0x00A40400,0x86101EFF,0x0D8407B6,0xFB31FF00,0x00B50000,0x90C60AFF,0x0CB80645,0xF78DFF00,0x02CE0098,0x9EDF48FF,0x0BD702AF,0xF727FF00,0x03A00400,0xA03340FF,0x0CB80645,0xF78DFF00,0x02CE0098,0x90F239FF,0x09F205F9,0xF47FFF00,0x05C00000,0xBFFB6CFF,0x0BD702AF,0xF727FF00,0x03A00400,0x83FC10FF,0x09F205F9,0xF47FFF00,0x05C00000,0xA3C53EFF,0x0A0C017C,0xF35DFF00,0x06F70400,0xA31053FF,0x0DF4058A,0x0183FF00,0x00E30400,0x97F0BBFF,0x0E310850,0xFE87FF00,0xFDA8FFAE,0x92C4F3FF,0x0EFF0477,0xFE25FF00,0xFD5403E3,0x820600FF,0x0E210344,0xFA0BFF00,0x00A40400,0x8A1826FF,0x0CB80645,0xF78DFF00,0x02CE0098,0xA4E753FF,0x0BD702AF,0xF727FF00,0x03A00400,0xB92761FF,0x0A0C017C,0xF35DFF00,0x06F20400,0x9F134FFF,0x09F205F9,0xF47FFF00,0x05C50000,0xA0C63AFF,0x07A90468,0xF1CFFF00,0x08C40098,0xCCE16FFF,0xF7E60B4C,0x0ADDFF00,0x06400400,0x35F58EFF,0xF77E0EEF,0x090FFF00,0x09EAFFF3,0x3EB8ADFF,0xFB170EA1,0x0A6EFF00,0x02240000,0xFFBD95FF,0xF7E60B4C,0x0ADDFF00,0x06400400,0x3CEC93FF,0xFB170EA1,0x0A6EFF00,0x02240000,0xFFB997FF,0xFAC00A3B,0x0B94FF00,0x00E30400,0xFA0582FF,0xFAC00A3B,0x0B94FF00,0x00E30400,0x5209A0FF,0xFB170EA1,0x0A6EFF00,0x02240000,0x4EBFB6FF,0xFD790D12,0x0CA9FF00,0xFDA8FFAE,0x21DC8CFF,0xFDB80939,0x0D83FF00,0xFD4E03E3,0x170B84FF,0xFD790D12,0x0CA9FF00,0xFDA2FFAE,0x22C994FF,0x00E20C8F,0x0CF1FF00,0x00B50000,0xE0D58EFF,0xFDB80939,0x0D83FF00,0xFD4E03E3,0x2EF68BFF,0x00E20C8F,0x0CF1FF00,0x00B50000,0xF8BF94FF,0x01EE0822,0x0DD2FF00,0x00DD0400,0xE40985FF,0x01EE0822,0x0DD2FF00,0x00A40400,0x041183FF,0x00E20C8F,0x0CF1FF00,0x00B50000,0x17C792FF,0x04A30B37,0x0D30FF00,0x02CE0098,0xD7DF8DFF,0x055D07A7,0x0C6DFF00,0x03A00400,0xDC3392FF,0x04A30B37,0x0D30FF00,0x02CE0098,0xE9F384FF,0x085A0B08,0x0B60FF00,0x05C00000,0xAAF9A3FF,0x055D07A7,0x0C6DFF00,0x03A00400,0x13FD83FF,0x085A0B08,0x0B60FF00,0x05C00000,0xE0C595FF,0x09880691,0x0BC1FF00,0x06F70400,0xCA108FFF,0xFAC00A3B,0x0B94FF00,0x00E30400,0x60F3AFFF,0xFD790D12,0x0CA9FF00,0xFDA8FFAE,0x2DC699FF,0xFDB80939,0x0D83FF00,0xFD5403E3,0x220887FF,0x01EE0822,0x0DD2FF00,0x00A40400,0xFC1884FF,0x04A30B37,0x0D30FF00,0x02CE0098,0xCBE790FF,0x055D07A7,0x0C6DFF00,0x03A00400,0xB625A1FF,0x09880691,0x0BC1FF00,0x06F20400,0xCF138DFF,0x085A0B08,0x0B60FF00,0x05C50000,0xE5C693FF,0x0B9D098F,0x09ECFF00,0x08C40098,0xA5E0AFFF,0xE7000000,0x00000000,0xE3001001,0x00000000,0xD7000002,0xFFFFFFFF,0xFD700000,(uint32_t)(zobj+0),0xF5700000,0x07014060,0xE6000000,0x00000000,0xF3000000,0x073FF100,0xE7000000,0x00000000,0xF5681000,0x00014060,0xF2000000,0x000FC07C,0xFC11FFFF,0xFFFFF238,0xE200001C,0xC8113078,0xD9F1FFFF,0x00000000,0xD9FFFFFF,0x00810400,0xFA000000,0xFFFFFFFF,0x0101E03C,(uint32_t)(zobj+1740),0x06000204,0x0006080A,0x060C0E10,0x00121416,0x06181A1C,0x001E2022,0x06242628,0x002A2C2E,0x06303234,0x0036383A,0x0101E03C,(uint32_t)(zobj+1860),0x06000204,0x0006080A,0x060C0E10,0x00121416,0x06181A1C,0x001E2022,0x06242628,0x002A2C2E,0x06303234,0x0036383A,0x0101E03C,(uint32_t)(zobj+1980),0x06000204,0x0006080A,0x060C0E10,0x00121416,0x06181A1C,0x001E2022,0x06242628,0x002A2C2E,0x06303234,0x0036383A,0x0101E03C,(uint32_t)(zobj+2100),0x06000204,0x0006080A,0x060C0E10,0x00121416,0x06181A1C,0x001E2022,0x06242628,0x002A2C2E,0x06303234,0x0036383A,0x0100C018,(uint32_t)(zobj+2220),0x06000204,0x0006080A,0x060C0E10,0x00121416,0xDF000000,0x00000000,0xFBA304F4,0xF690FF00,0xFC3A034C,0xEF9946FF,0xF8C104F4,0xF780FF00,0x0736FCC3,0x38992EFF,0xF98D0318,0xF50DFF00,0x0A4C0724,0x22C66BFF,0xFA1E02D7,0x0B83FF00,0x010808AB,0x3A0590FF,0xF91C05D2,0x0A07FF00,0xFF03FF2E,0x51CCAFFF,0xFBF40659,0x0B3EFF00,0x0BC2FFFE,0x14C194FF,0x0342FFFA,0x0D31FF00,0x010808AB,0xD4058AFF,0x017A02F6,0x0CF2FF00,0xFF03FF2E,0xFBCC8DFF,0x0449037C,0x0BA5FF00,0x0BC2FFFE,0xBDC1A9FF,0x0B1E05EA,0xFDD1FF00,0x010808AB,0x880527FF,0x0ACB08E6,0xFF95FF00,0xFF03FF2E,0x8DCC01FF,0x099D096C,0xFCB9FF00,0x0BC2FFFE,0xA6C13FFF,0x065D03D7,0xF586FF00,0x010808AB,0xB8F166FF,0x06E306A1,0xF78BFF00,0xFF03FF2E,0xAABA3DFF,0x0431071F,0xF606FF00,0x0BC2FFFE,0xE4B05EFF,0x0A2C010C,0x0266FF00,0x010808AB,0x880527FF,0x09D90408,0x042AFF00,0xFF03FF2E,0x8DCC01FF,0x08AB048E,0x014FFF00,0x0BC2FFFE,0xA6C13FFF,0xF1ED010C,0x02D9FF00,0x010808AB,0x7805D9FF,0xF2400408,0x0115FF00,0xFF03FF2E,0x73CCFFFF,0xF36E048E,0x03F1FF00,0x0BC2FFFE,0x5AC1C1FF,0xF43BFF4D,0xF9FEFF00,0x010808AB,0x54055EFF,0xF5FA0249,0xF994FF00,0xFF03FF2E,0x2FCC69FF,0xF3D602CF,0xFBCFFF00,0x0BC2FFFE,0x5EC139FF,0xE7000000,0x00000000,0xE3001001,0x00008000,0xD7000002,0xFFFFFFFF,0xFD500000,(uint32_t)(zobj+1024),0xF5500000,0x07094260,0xE6000000,0x00000000,0xF3000000,0x071FF200,0xE7000000,0x00000000,0xF5400800,0x00094260,0xF2000000,0x000FC07C,0xFD100000,(uint32_t)(zobj+1288),0xE8000000,0x00000000,0xF5000100,0x07000000,0xE6000000,0x00000000,0xF0000000,0x0703C000,0xE7000000,0x00000000,0xFC11FFFF,0xFFFFF238,0xE200001C,0xC8113078,0xD9F1FFFF,0x00000000,0xD9FFFFFF,0x00810400,0xFA000000,0xFFFFFFFF,0x01018030,(uint32_t)(zobj+2354),0x06000204,0x0006080A,0x060C0E10,0x00121416,0x06181A1C,0x001E2022,0x06242628,0x002A2C2E,0xDF000000,0x00000000};
/* Base Offset: 0x06000000 */

#endif

