#include <stdint.h>

int8_t tempLoop0 = 2;

int8_t tempLoop1 = 4;

int32_t tempStride0_in = 256;

int32_t tempStride1_in = 1024;

int32_t tempStride0_out = 64;

int32_t tempStride1_out = 256;

int32_t delta_local_in = 0;

int32_t delta_local_out = 4096;

int8_t input_zp_i = -26;

int8_t output_zp_i = 51;

int8_t shift_i = 28;

int8_t max_int_i = 127;

int8_t min_int_i = -128;

int8_t double_round_i = 0;

int32_t multiplier_i = -1359637234;

int32_t DataIn[512]  = {
	996406378,
	1201263687,
	423734972,
	415968276,
	-1477388698,
	-232646535,
	-1477492270,
	-1718094634,
	-1898016438,
	-175024694,
	1572714583,
	-714216076,
	434285667,
	-1533875353,
	893664919,
	648061058,
	-2059073899,
	-1905197772,
	2018247425,
	953477463,
	1427830251,
	1883569565,
	-1235494107,
	-2144138879,
	-1366551361,
	2114032571,
	-1359767276,
	504579232,
	-840773173,
	479546681,
	106328085,
	-2117134084,
	-292293909,
	-2048431272,
	-896664016,
	106406362,
	480404538,
	-430093826,
	-1548362071,
	-1947056129,
	-892731941,
	2034764475,
	-573971505,
	-1147738354,
	-188677955,
	-1758331971,
	1224821422,
	508464061,
	-1289891278,
	-504821909,
	61136438,
	2075460851,
	396917567,
	-142752264,
	-1947980670,
	1545932260,
	461901618,
	774414982,
	-1415088108,
	-212604088,
	-1868089178,
	-2090511087,
	1927948675,
	1899242072,
	1999874363,
	271820813,
	1324556529,
	-492132359,
	-839177464,
	-2078909095,
	-1727985100,
	-1155802239,
	791274835,
	-1112287141,
	-257043090,
	787110843,
	-1623333434,
	472432043,
	-20715012,
	1431061255,
	-1999786066,
	-1402888158,
	1758017741,
	-467891120,
	-1036032093,
	-1364785615,
	698027879,
	1096768899,
	-808694783,
	-321453059,
	86191493,
	-1254381003,
	200619113,
	290770691,
	-1353539787,
	-2012994084,
	2016850622,
	1470101905,
	1181686489,
	-215804373,
	1887633569,
	-450326327,
	1695770557,
	1832485859,
	420477197,
	976125790,
	1811936047,
	-745001714,
	-1767411257,
	302554573,
	-1305743658,
	89482491,
	-1953233928,
	1980718781,
	-750200537,
	1479761620,
	-478127409,
	1062231788,
	-982048431,
	170476398,
	1411916852,
	372593431,
	-615239783,
	1998256344,
	-940879109,
	459708603,
	183378299,
	-962076180,
	-1542218712,
	-874998628,
	1297926158,
	-1437667540,
	-1827291072,
	-2080325800,
	2091163462,
	-328988152,
	1169282391,
	-451480448,
	-1294006293,
	-886961529,
	-2123766313,
	-2087011266,
	1354896522,
	-1293462030,
	888445520,
	907706759,
	983578274,
	1246294434,
	1165097248,
	455094650,
	-1829464316,
	1830948329,
	-607885082,
	648870905,
	-1649829848,
	1782238235,
	1559517318,
	1503404232,
	529561415,
	-217107701,
	-726287455,
	-1737700320,
	-1874502609,
	-554831370,
	-811824746,
	725167677,
	-750831913,
	712631076,
	986151010,
	392121003,
	590804839,
	-967562539,
	1663066074,
	263038498,
	-119336000,
	-502825246,
	-1633830300,
	2025988014,
	915879373,
	1498573442,
	1120063232,
	952321028,
	263183577,
	-1133936138,
	1163795198,
	-1047678579,
	-26647706,
	-1973822694,
	97636744,
	904790222,
	-311208946,
	-1671211175,
	-2038309335,
	-260547717,
	-1684093492,
	-1281106254,
	-2012496322,
	1699791711,
	585878246,
	-105784080,
	-797334989,
	271766524,
	36810847,
	839735171,
	1750484701,
	-1549059612,
	-1076781674,
	448469222,
	-384902420,
	171116174,
	1097583786,
	-1275342308,
	-1164803037,
	1902041612,
	-1816857441,
	424623942,
	-903010630,
	836594930,
	-1455043499,
	1634096923,
	1845537345,
	534096553,
	1323366956,
	-877746627,
	572964792,
	-1694389260,
	1595411077,
	-186682597,
	1304261659,
	-1209289109,
	-1346171349,
	-358587053,
	1686028061,
	1646176189,
	168973642,
	-754432385,
	1320445433,
	-1623119882,
	1701199195,
	-617196072,
	-781669146,
	1747314877,
	-1674814240,
	-978684544,
	-1168509576,
	634324250,
	-313069635,
	-2145248648,
	1365863027,
	-633211956,
	1549326056,
	-838458110,
	-2117624474,
	-1440292155,
	46159303,
	146412954,
	-354717048,
	-65154755,
	-1193537884,
	826506464,
	-1632665806,
	-990366487,
	-697437525,
	-1098972521,
	1902282702,
	-1424679110,
	-759337611,
	-1207898465,
	80705119,
	249546199,
	871959784,
	-413020493,
	-585706384,
	-1868773571,
	2026288624,
	-1056925255,
	1986196019,
	-1087159029,
	-1066086915,
	843120422,
	-11817599,
	911695234,
	-855221136,
	-1511455132,
	-924103056,
	2137779127,
	-1989055408,
	-1001667910,
	470575216,
	2047045633,
	11506305,
	-382093093,
	-1926384075,
	-2005531818,
	-950706204,
	-665413921,
	1753488608,
	577034624,
	-1118573166,
	776124029,
	-1525164927,
	132863028,
	-45300053,
	-224269607,
	2085852831,
	227174085,
	-1107864161,
	398129398,
	739316547,
	-1800221258,
	1123647690,
	-559829833,
	-1126838150,
	-1107414640,
	980181758,
	1301975333,
	-567867113,
	-127557820,
	568249203,
	2076286561,
	573505733,
	-434545707,
	153651082,
	1359064574,
	-1759692049,
	1281382543,
	1440113248,
	-1500156728,
	-769743749,
	35213498,
	-1346392763,
	841009615,
	-1972355748,
	1539139330,
	390382227,
	-747500805,
	762633146,
	-1201555549,
	-2076239470,
	906880345,
	51939266,
	1329296894,
	-1174691694,
	-649974637,
	623512415,
	-1734408506,
	-1398585549,
	1892033000,
	820071328,
	-439924825,
	-486467969,
	76241446,
	1875741009,
	1450453863,
	-1556835712,
	754583306,
	-682614821,
	1010245560,
	-1660118568,
	-1249527887,
	1824045206,
	178017694,
	1620660189,
	840887593,
	-1039632798,
	-1165868794,
	687126267,
	-1396057969,
	1362458969,
	2070897263,
	237085688,
	71450611,
	127348283,
	-1027230864,
	-1108735999,
	2131393408,
	-1747610321,
	1998960893,
	1706028683,
	250368452,
	1719782436,
	1643410591,
	571666426,
	-1336992778,
	-691361784,
	-949740312,
	-647639966,
	860530322,
	970472239,
	1488898255,
	1705575554,
	1530401171,
	1662523543,
	-410134475,
	1202056311,
	1665459872,
	610021271,
	1507226227,
	-1786105270,
	1871038064,
	-1453293625,
	1225528739,
	1711777189,
	725799015,
	457109331,
	346546429,
	-2107982622,
	-548541329,
	-1711666691,
	1890358744,
	702234722,
	2034370712,
	-2125744292,
	-928052335,
	-1456818305,
	-835955859,
	209310033,
	-61788479,
	824183605,
	-221516638,
	652668623,
	2123678652,
	-1184254296,
	-1391890461,
	911302816,
	-2069850557,
	-1128506592,
	-26226291,
	-749902572,
	-1379445969,
	1058672531,
	-573512201,
	642668415,
	1048704391,
	1499903110,
	948929730,
	676942224,
	-824372609,
	293383200,
	182708911,
	-1745153589,
	37856186,
	-568156302,
	585544149,
	-1008448138,
	-1071758315,
	-1099556115,
	385992349,
	2031564837,
	2056829157,
	-459141780,
	-56942030,
	1683827125,
	1744180999,
	563236122,
	-281774054,
	1266204897,
	-643908332,
	11326237,
	623214176,
	330299675,
	725523310,
	-32136257,
	1564087776,
	-1308921404,
	-1158845445,
	955424572,
	-3464401,
	-941575534,
	309255683,
	-2043047390,
	1153430719,
	624798768,
	-1960206849,
	-1386799088,
	2124078251,
	1891755227,
	-129087331,
	1949608412,
	-946781139,
	1781828980,
	1647094277,
	-557664158,
	1063944059,
	-2081098008,
	1945928740,
	1839614231,
	-726921892,
	-308446736,
	226623789,
	2004267188,
	310493790,
	1991232610,
	2063008443,
	1516164064,
	-1823873933,
	-882835266,
	-834524932,
	-493501484,
	-1327527009,
	1508120534,
	-994392928,
	-786313985,
	-63222462,
	-1419517825,
	-546805743,
	243959576,
	-452296727,
	1873270494,
	1478384181,
	841941561,
	1846908226,
};

int8_t C_golden[512]  = {
	-128,
	127,
	127,
	127,
	127,
	-128,
	127,
	127,
	127,
	127,
	127,
	-128,
	-128,
	-128,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	-128,
	-128,
	-128,
	127,
	127,
	127,
	127,
	-128,
	-128,
	-128,
	-128,
	-128,
	-128,
	-128,
	127,
	-128,
	-128,
	127,
	-128,
	-128,
	127,
	127,
	127,
	-128,
	127,
	127,
	127,
	-128,
	127,
	127,
	-128,
	127,
	127,
	127,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	-128,
	127,
	-128,
	127,
	-128,
	-128,
	127,
	-128,
	-128,
	127,
	-128,
	-128,
	127,
	-128,
	127,
	127,
	127,
	127,
	127,
	-128,
	-128,
	-128,
	-128,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	127,
	127,
	-128,
	-128,
	127,
	-128,
	-128,
	127,
	127,
	127,
	-128,
	-128,
	127,
	127,
	127,
	127,
	-128,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	127,
	127,
	127,
	127,
	127,
	-128,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	-128,
	127,
	127,
	-128,
	-128,
	-128,
	127,
	127,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	127,
	127,
	127,
	127,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	127,
	127,
	127,
	-128,
	-128,
	-128,
	-128,
	-128,
	-128,
	-128,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	-128,
	-128,
	-128,
	-128,
	-128,
	127,
	127,
	-128,
	-128,
	127,
	-128,
	127,
	127,
	127,
	127,
	-128,
	-128,
	-128,
	127,
	-128,
	-128,
	127,
	127,
	-128,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	-128,
	-128,
	-128,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	-128,
	-128,
	127,
	127,
	127,
	127,
	127,
	-128,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	-128,
	127,
	-128,
	127,
	-128,
	-128,
	-128,
	-128,
	127,
	-128,
	-128,
	-128,
	-128,
	127,
	-128,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	127,
	127,
	127,
	127,
	127,
	-128,
	-128,
	-128,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	-128,
	127,
	-128,
	-128,
	-128,
	-128,
	-128,
	127,
	127,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	-128,
	-128,
	-128,
	-128,
	-128,
	-128,
	-128,
	127,
	127,
	-128,
	127,
	127,
	127,
	-128,
	-128,
	-128,
	-128,
	127,
	-128,
	-128,
	-128,
	-128,
	-128,
	-128,
	127,
	127,
	127,
	-128,
	127,
	127,
	-128,
	127,
	127,
	-128,
	-128,
	127,
	-128,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	127,
	127,
	-128,
	127,
	127,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	127,
	127,
	127,
	127,
	127,
	-128,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	-128,
	127,
	127,
	127,
	127,
	127,
	127,
	-128,
	-128,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	127,
	127,
	127,
	127,
	-128,
	-128,
	127,
	127,
	127,
	-128,
	127,
	-128,
	-128,
	127,
	-128,
	-128,
	127,
	127,
	127,
	-128,
	127,
	127,
	127,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	127,
	127,
	127,
	127,
	127,
	127,
	127,
	-128,
	127,
	127,
	127,
	127,
	-128,
	127,
	127,
	127,
	127,
	127,
	-128,
	-128,
	127,
	-128,
};

int8_t C_golden_c_spec[512]  = {
	-128,
	127,
	127,
	127,
	127,
	-128,
	127,
	127,
	127,
	127,
	127,
	-128,
	-128,
	-128,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	-128,
	-128,
	-128,
	127,
	127,
	127,
	127,
	-128,
	-128,
	-128,
	-128,
	-128,
	-128,
	-128,
	127,
	-128,
	-128,
	127,
	-128,
	-128,
	127,
	127,
	127,
	-128,
	127,
	127,
	127,
	-128,
	127,
	127,
	-128,
	127,
	127,
	127,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	-128,
	127,
	-128,
	127,
	-128,
	-128,
	127,
	-128,
	-128,
	127,
	-128,
	-128,
	127,
	-128,
	127,
	127,
	127,
	127,
	127,
	-128,
	-128,
	-128,
	-128,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	127,
	127,
	-128,
	-128,
	127,
	-128,
	-128,
	127,
	127,
	127,
	-128,
	-128,
	127,
	127,
	127,
	127,
	-128,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	127,
	127,
	127,
	127,
	127,
	-128,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	-128,
	127,
	127,
	-128,
	-128,
	-128,
	127,
	127,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	127,
	127,
	127,
	127,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	127,
	127,
	127,
	-128,
	-128,
	-128,
	-128,
	-128,
	-128,
	-128,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	-128,
	-128,
	-128,
	-128,
	-128,
	127,
	127,
	-128,
	-128,
	127,
	-128,
	127,
	127,
	127,
	127,
	-128,
	-128,
	-128,
	127,
	-128,
	-128,
	127,
	127,
	-128,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	-128,
	-128,
	-128,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	-128,
	-128,
	127,
	127,
	127,
	127,
	127,
	-128,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	-128,
	127,
	-128,
	127,
	-128,
	-128,
	-128,
	-128,
	127,
	-128,
	-128,
	-128,
	-128,
	127,
	-128,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	127,
	127,
	127,
	127,
	127,
	-128,
	-128,
	-128,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	-128,
	127,
	-128,
	-128,
	-128,
	-128,
	-128,
	127,
	127,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	-128,
	-128,
	-128,
	-128,
	-128,
	-128,
	-128,
	127,
	127,
	-128,
	127,
	127,
	127,
	-128,
	-128,
	-128,
	-128,
	127,
	-128,
	-128,
	-128,
	-128,
	-128,
	-128,
	127,
	127,
	127,
	-128,
	127,
	127,
	-128,
	127,
	127,
	-128,
	-128,
	127,
	-128,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	127,
	127,
	-128,
	127,
	127,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	127,
	127,
	127,
	127,
	127,
	-128,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	127,
	-128,
	-128,
	127,
	127,
	127,
	127,
	127,
	127,
	-128,
	-128,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	127,
	127,
	127,
	127,
	-128,
	-128,
	127,
	127,
	127,
	-128,
	127,
	-128,
	-128,
	127,
	-128,
	-128,
	127,
	127,
	127,
	-128,
	127,
	127,
	127,
	-128,
	127,
	-128,
	-128,
	-128,
	127,
	127,
	127,
	127,
	127,
	127,
	127,
	127,
	-128,
	127,
	127,
	127,
	127,
	-128,
	127,
	127,
	127,
	127,
	127,
	-128,
	-128,
	127,
	-128,
};

int8_t C[512]  = {
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
};

int8_t C_cpu[512]  = {
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
};
