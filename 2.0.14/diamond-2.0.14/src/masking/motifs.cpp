#include "masking.h"

const std::unordered_set<Kmer<MOTIF_LEN>, Kmer<MOTIF_LEN>::Hash> motif_table = {
"FRKYTAFT",
"KYTAFTIP",
"RKYTAFTI",
"PQGWKGSP",
"YTAFTIPS",
"LPQGWKGS",
"VLPQGWKG",
"NVLPQGWK",
"YNVLPQGW",
"RYQYNVLP",
"QYNVLPQG",
"PENPYNTP",
"YQYNVLPQ",
"GPENPYNT",
"DVGDAYFS",
"LDVGDAYF",
"VDFRELNK",
"VQLGIPHP",
"EVQLGIPH",
"IGPENPYN",
"KGSPAIFQ",
"TVLDVGDA",
"WKGSPAIF",
"GWKGSPAI",
"WEVQLGIP",
"QGWKGSPA",
"VLDVGDAY",
"FWEVQLGI",
"TQDFWEVQ",
"QDFWEVQL",
"DFWEVQLG",
"WRKLVDFR",
"KLVDFREL",
"LVDFRELN",
"RKLVDFRE",
"RELNKRTQ",
"QLGIPHPA",
"LGIPHPAG",
"FRELNKRT",
"GDAYFSVP",
"DAYFSVPL",
"LNKRTQDF",
"DFRELNKR",
"ELNKRTQD",
"VGDAYFSV",
"GIPHPAGL",
"VTVLDVGD",
"SVTVLDVG",
"NKRTQDFW",
"KRTQDFWE",
"DDLYVGSD",
"DLYVGSDL",
"KIGPENPY",
"KWRKLVDF",
"LYVGSDLE",
"RTQDFWEV",
"KSVTVLDV",
"PGIRYQYN",
"IRYQYNVL",
"GIRYQYNV",
"YVGSDLEI",
"IPHPAGLK",
"TKWRKLVD",
"TPGIRYQY",
"KHQKEPPF",
"TPDKKHQK",
"PDKKHQKE",
"FAIKKKDS",
"QKEPPFLW",
"KDSTKWRK",
"NETPGIRY",
"AYFSVPLD",
"ETPGIRYQ",
"WMGYELHP",
"STKWRKLV",
"NNETPGIR",
"KEPPFLWM",
"HQKEPPFL",
"KKDSTKWR",
"DKKHQKEP",
"EPPFLWMG",
"SDLEIGQH",
"DLEIGQHR",
"DSTKWRKL",
"PPFLWMGY",
"PFLWMGYE",
"SMTKILEP",
"KKHQKEPP",
"FLWMGYEL",
"PHPAGLKK",
"AIKKKDST",
"MTKILEPF",
"MGYELHPD",
"LWMGYELH",
"TKILEPFR",
"ALLDTGAD",
"VGSDLEIG",
"EALLDTGA",
"LDTGADDT",
"DTGADDTV",
"LLDTGADD",
"QYMDDLYV",
"TTPDKKHQ",
"KKSVTVLD",
"GIGGFIKV",
"GSDLEIGQ",
"IYQYMDDL",
"YQYMDDLY",
"YMDDLYVG",
"SKIGPENP",
"GKISKIGP",
"MDDLYVGS",
"ISKIGPEN",
"TGADDTVL",
"KISKIGPE",
"GADDTVLE",
"NPYNTPVF",
"EMEKEGKI",
"EGKISKIG",
"ENPYNTPV",
"QWPLTEEK",
"PKMIGGIG",
"WPLTEEKI",
"PYNTPVFA",
"YNTPVFAI",
"KKKSVTVL",
"GYELHPDK",
"LKPGMDGP",
"KQWPLTEE",
"TPVNIIGR",
"GPTPVNII",
"PTPVNIIG",
"HPAGLKKK",
"LTEEKIKA",
"PLTEEKIK",
"NTPVFAIK",
"TEEKIKAL",
"PVNIIGRN",
"KPKMIGGI",
"WKPKMIGG",
"TPVFAIKK",
"PVFAIKKK",
"VKQWPLTE",
"YELHPDKW",
"ELHPDKWT",
"GSPAIFQS",
"SPAIFQSS",
"PAIFQSSM",
"WGFTTPDK",
"GFTTPDKK",
"VIYQYMDD",
"FTTPDKKH",
"VFAIKKKD",
"MEKEGKIS",
"EKEGKISK",
"LHPDKWTV",
"IGGFIKVR",
"KEGKISKI",
"GGFIKVRQ",
"GFIKVRQY",
"KVKQWPLT",
"HPDKWTVQ",
"AIFQSSMT",
"GCTLNFPI",
"PKVKQWPL",
"CTLNFPIS",
"KEALLDTG",
"KPGMDGPK",
"KLKPGMDG",
"GPKVKQWP",
"VKLKPGMD",
"PVKLKPGM",
"DGPKVKQW",
"MDGPKVKQ",
"PGMDGPKV",
"GMDGPKVK",
"TLNFPISP",
"VPVKLKPG",
"TVPVKLKP",
"LNFPISPI",
"TVLVGPTP",
"FQSSMTKI",
"QSSMTKIL",
"GTVLVGPT",
"IFQSSMTK",
"PDKWTVQP",
"QITLWQRP",
"LVGPTPVN",
"VLVGPTPV",
"PQITLWQR",
"VGPTPVNI",
"TAFTIPSI",
"AFTIPSIN",
"FIKVRQYD",
"FTIPSINN",
"DFRKYTAF",
"ISPIETVP",
"SPIETVPV",
"PISPIETV",
"TLWQRPLV",
"SSMTKILE",
"DKWTVQPI",
"ETVPVKLK",
"IETVPVKL",
"IKVRQYDQ",
"TIPSINNE",
"PIETVPVK",
"PSINNETP",
"SINNETPG",
"IPSINNET",
"IGTVLVGP",
"IVIYQYMD",
"KILEPFRK",
"ILEPFRKQ",
"NFPISPIE",
"FPISPIET",
"LEPFRKQN",
"EPFRKQNP",
"ITLWQRPL",
"AIGTVLVG",
"TEMEKEGK",
"LKEALLDT",
"CTEMEKEG",
"QLKEALLD",
"NIIGRNLL",
"IIGRNLLT",
"GQLKEALL",
"IGRNLLTQ",
"INNETPGI",
"VNIIGRNL",
"QTNLLALN",
"IYTSGSTG",
"TQIGCTLN",
"QIGCTLNF",
"LTQIGCTL",
"SHELRTPL",
"KVRQYDQI",
"ADDTVLEE",
"LWQRPLVT",
"KAIGTVLV",
"GKWKPKMI",
"KWKPKMIG",
"YFSVPLDE",
"GGQLKEAL",
"LPGKWKPK",
"ICTEMEKE",
"GTGLGLAI",
"HRTKIEEL",
"PGKWKPKM",
"RTKIEELR",
"IEAARAGE",
"PFRKQNPD",
"YFSVPLDK",
"EICTEMEK",
"EELRQHLL",
"LEIGQHRT",
"QHRTKIEE",
"EIGQHRTK",
"PDIVIYQY",
"GRGFAVVA",
"NPDIVIYQ",
"IEELRQHL",
"TQLGCTLN",
"KIEELRQH",
"QLGCTLNF",
"DDFGTGYS",
"EEKIKALT",
"IGCTLNFP",
"MSHEIRTP",
"LTQLGCTL",
"IGQHRTKI",
"LEIGQHRA",
"ADDTVLED",
"EIGQHRAK",
"AYVIYTSG",
"NLPGKWKP",
"WTVNDIQK",
"GQHRTKIE",
"SWTVNDIQ",
"FRKQNPDI",
"TVNDIQKL",
"DFGTGYSS",
"VNDIQKLV",
"HRAKIEEL",
"NDIQKLVG",
"RAKIEELR",
"IGGQLKEA",
"VIYTSGST",
"QNPDIVIY",
"YVIYTSGS",
"DIQKLVGK",
"NPYNTPIF",
"PYNTPIFA",
"IQKLVGKL",
"YNTPIFAI",
"QKLVGKLN",
"FLANMSHE",
"QHRAKIEE",
"LGCTLNFP",
"KLVGKLNW",
"NIIGRNML",
"LVGKLNWA",
"LALNAAIE",
"DIVIYQYM",
"IIGRNMLT",
"ENPYNTPI",
"GKLNWASQ",
"IGRNMLTQ",
"NTPIFAIK",
"VGKLNWAS",
"KLNWASQI",
"RIELGEIE",
"IGQHRAKI",
"FGTGYSSL",
"LNWASQIY",
"GTGLGLSI",
"DSWTVNDI",
"KQNPDIVI",
"LPGRWKPK",
"RKQNPDIV",
"WQRPLVTI",
"PIFAIKKK",
"TPIFAIKK",
"GRWKPKMI",
"KWGFTTPD",
"LLKWGFTT",
"LKWGFTTP",
"KDSWTVND",
"RWKPKMIG",
"HLLKWGFT",
"GQHRAKIE",
"TAFTIPST",
"AFTIPSTN",
"FTIPSTNN",
"LPEKDSWT",
"IKALVEIC",
"KIKALVEI",
"EKIKALVE",
"NGAGKSTL",
"PEKDSWTV",
"PGRWKPKM",
"TSGSTGRP",
"EEKIKALV",
"SGSTGRPK",
"KIGGQLKE",
"ALVEICTE",
"LLTQIGCT",
"VNIIGRNM",
"NLLTQIGC",
"KALVEICT",
"DTACSSSL",
"RNLLTQIG",
"GRNLLTQI",
"TIPSTNNE",
"GWTVYPPL",
"TGWTVYPP",
"GTGWTVYP",
"GHKAIGTV",
"IKALTEIC",
"HKAIGTVL",
"ICGHKAIG",
"QRPLVTIK",
"EKDSWTVN",
"KIKALTEI",
"GSTGRPKG",
"IFSLHLAG",
"EKIKALTE",
"PSTNNETP",
"EDFRKYTA",
"STNNETPG",
"IFAIKKKD",
"IPSTNNET",
"KDFRKYTA",
"CGHKAIGT",
"GFAVVADE",
"DKDFRKYT",
"PLDKDFRK",
"LDKDFRKY",
"TACSSSLV",
"SGSGKSTL",
"EICGHKAI",
"INLPGKWK",
"TKIEELRQ",
"LGGHSLLA",
"GSGKSTLL",
"LVEICTEM",
"VEICTEME",
"ICGKKAIG",
"SVPLDKDF",
"VPLDKDFR",
"FSVPLDKD",
"SHEIRTPM",
"EICGKKAI",
"IEICGKKA",
"PEIVIYQY",
"NMSHEIRT",
"LSGGQRQR",
"NPEIVIYQ",
"KKAIGTVL",
"DDTVLEEM",
"GKKAIGTV",
"APDMAFPR",
"ACSSSLVA",
"GKGFAVVA",
"STGRPKGV",
"DDTVLEDI",
"ARLGGDEF",
"GAPDMAFP",
"RMNNMSFW",
"FAVVADEV",
"PRMNNMSF",
"IEICGHKA",
"TNNETPGI",
"LSGGQKQR",
"GPNGAGKT",
"HEIRTPMN",
"FPRMNNMS",
"MAFPRMNN",
"CGKKAIGT",
"DMAFPRMN",
"HRDLKPEN",
"NNMSFWLL",
"GAGTGWTV",
"QYVDDLYV",
"ANMSHEIR",
"HELRTPLN",
"VTIKIGGQ",
"AFPRMNNM",
"IEELREHL",
"AGTGWTVY",
"WTVQPIVL",
"MSFWLLPP",
"PDMAFPRM",
"NMSFWLLP",
"KIEELREH",
"MIFFMVMP",
"VEAHGTGT",
"RWGFTTPD",
"LLRWGFTT",
"LRWGFTTP",
"HLLRWGFT",
"LAYVIYTS",
"KWTVQPIV",
"GFRIELGE",
"AVVADEVR",
"TVQPIVLP",
"RGFRIELG",
"QVKIRGFR",
"LANMSHEI",
"IGGFGNWL",
"SFWLLPPS",
"LLTQLGCT",
"PNGAGKTT",
"GAGKSTLL",
"RPLVTIKI",
"QLCKLLRG",
"IKIGGQLK",
"GRNLLTQL",
"DEATSALD",
"RNLLTQLG",
"NLLTQLGC",
"MNNMSFWL",
"IYQYVDDL",
"MSHELRTP",
"RGFAVVAD",
"IFFMVMPI",
"EIVIYQYM",
"TIKIGGQL",
"GSGKTTLL",
"YTSGSTGR",
"EFRKYTAF",
"LRQHLLRW",
"RMYRTGDL",
"RQHLLRWG",
"PLVTIKIG",
"FEPFFTTK",
"ELRQHLLR",
"VDTACSSS",
"HELRTPLT",
"NGAGKTTL",
"LVTIKIGG",
"QIPIEICG",
"YQYVDDLY",
"KIRGFRIE",
"MIGGFGNW",
"WTVYPPLS",
"TVLEDINL",
"IDDFGTGY",
"GSPAIFQC",
"DTVLEDIN",
"SPAIFQCS",
"PAIFQCSM",
"ITMLLTDR",
"GKITKIGP",
"AIFQCSMT",
"GFGNWLVP",
"IFQCSMTK",
"GPNGAGKS",
"EGKITKIG",
"GGFGNWLV",
"LGPNGAGK",
"AIFSLHLA",
"FQCSMTKI",
"QCSMTKIL",
"LEDINLPG",
"GNWLVPLM",
"YVDDLYVG",
"VDDLYVGS",
"FRIELGEI",
"DLAIFSLH",
"PIEICGHK",
"VLEDINLP",
"TMLLTDRN",
"VDLAIFSL",
"FGNWLVPL",
"FFMVMPIM",
"MEKEGKIT",
"EELRAHLL",
"SVDLAIFS",
"SGSTGKPK",
"TSGSTGKP",
"EKEGKITK",
"KEGKITKI",
"SFRKYTAF",
"AGISSILG",
"TKIGPENP",
"VKIRGFRI",
"NLPGRWKP",
"FSLHLAGI",
"LAIFSLHL",
"ITKIGPEN",
"LHLAGISS",
"SLHLAGIS",
"KITKIGPE",
"HLAGISSI",
"GISSILGA",
"DPQQRLLL",
"FTLIELLV",
"MLTQIGCT",
"LAGISSIL",
"NMLTQIGC",
"RNMLTQIG",
"KAGGAYVP",
"SHEIRTPL",
"GRNMLTQI",
"ESFRKYTA",
"LSLPVLAG",
"DDTVLEEI",
"LDEATSAL",
"GAGKTTLL",
"FFELGGHS",
"GSTGKPKG",
"VRQYDQIL",
"TVLIGPTP",
"PIMIGGFG",
"IMIGGFGN",
"CSMTKILE",
"VMPIMIGG",
"DINLPGKW",
"MPIMIGGF",
"EDINLPGK",
"QRVAIARA",
"QILIEICG",
"MVMPIMIG",
"PQQRLLLE",
"VSHELRTP",
"VIYQYVDD",
"GTVLIGPT",
"FMVMPIMI",
"LIGPTPVN",
"NGSGKSTL",
"YRTGDLVR",
"TLIELLVV",
"SLPVLAGA",
"YDQIPIEI",
"VLIGPTPV",
"WTVQPIQL",
"FELGGHSL",
"YDQILIEI",
"PVLAGAIT",
"QYDQILIE",
"IGPTPVNI",
"LPVLAGAI",
"QYDQIPIE",
"NWASQIYP",
"IEELRAHL",
"KWTVQPIQ",
"QNYPNPFN",
"HRDIKPEN",
"WASQIYPG",
"PNGAGKST",
"KIEELRAH",
"VRQYDQIP",
"TVQPIQLP",
"VLAGAITM",
"PLDESFRK",
"LDESFRKY",
"GTGYSSLS",
"DESFRKYT",
"CQGDSGGP",
"LRQHLLKW",
"DQILIEIC",
"RQHLLKWG",
"QHLLRWGF",
"VDLAGSER",
"ASQIYPGI",
"DQIPIEIC",
"EQTNLLAL",
"TVLEEMNL",
"DLKPENIL",
"AARAGEQG",
"EAARAGEQ",
"LREHLLKW",
"FDPFFTTK",
"REHLLKWG",
"DTVLEEMN",
"LAGAITML",
"PLDEDFRK",
"LVDLAGSE",
"DEDFRKYT",
"LDEDFRKY",
"ELRQHLLK",
"MLGAPDMA",
"LGAPDMAF",
"AGAITMLL",
"KEFRKYTA",
"DKEFRKYT",
"SVPLDESF",
"LDKEFRKY",
"PLDKEFRK",
"LEEMNLPG",
"VPLDESFR",
"LDDFGTGY",
"IYTSGTTG",
"FSVPLDES",
"RLYRTGDL",
"YRTGDLAR",
"LMLGAPDM",
"VLEEMNLP",
"IELGEIEA",
"TVYPPLSS",
"LSGGQQQR",
"WPGNVREL",
"QGRGFAVV",
"FGISPREA",
"LKAGGAYV",
"PLMLGAPD",
"ELREHLLK",
"DEPTNHLD",
"GFTLIELL",
"GIKVKQLC",
"MLTQLGCT",
"ELELAENR",
"NMLTQLGC",
"ELAENREI",
"SILGAINF",
"RNMLTQLG",
"LELAENRE",
"WGLTTPDK",
"GRNMLTQL",
"AKIEELRE",
"SSILGAIN",
"SGSGKTTL",
"DEMGLGKT",
"GLTTPDKK",
"MLLTDRNL",
"LAENREIL",
"SQIYPGIK",
"GIAHDFNN",
"ILGAINFI",
"SGSTGTPK",
"AGEQGRGF",
"MDPQQRLL",
"LLTDRNLN",
"CSSSLVAL",
"RAGEQGRG",
"SVPLDKEF",
"GAITMLLT",
"VQPIVLPE",
"VPLDKEFR",
"ARAGEQGR",
"FSVPLDKE",
"GPNGSGKS",
"YTSGSTGK",
"WQRPLVTV",
"DEPTSGLD",
"RQYDQIPI",
"LTTPDKKH",
"ILIEICGK",
"AITMLLTD",
"LDEPTNHL",
"HEIRTPLN",
"NLLSNAIK",
"GSGLGLAI",
"NWLVPLML",
"LTDRNLNT",
"QPIVLPEK",
"GEQGRGFA",
"RQYDQILI",
"PSGSGKST",
"TGLGLAIS",
"EQGRGFAV",
"VIVTAHAF",
"NQDGASNG",
"QIYPGIKV",
"NGAGKTTT",
"STGKPKGV",
"DGASNGLT",
"IVHRDLKP",
"FVNTLVLR",
"IRGFRIEL",
"FITTIINM",
"IPIEICGH",
"GASNGLTA",
"NVIVTAHA",
"ASNGLTAP",
"YGQTGSGK",
"GGHSLLAT",
"TVDTACSS",
"FWLLPPSL",
"NDILDFSK",
"SVPLDEDF",
"QGDSGGPL",
"SSSLVALH",
"VPLDEDFR",
"VGESGSGK",
"YNVIVTAH",
"IGGFIKVK",
"RDLKPENI",
"FFGISPRE",
"LVPLMLGA",
"PFRKQNPE",
"FSVPLDED",
"GAINFITT",
"WLVPLMLG",
"GGFIKVKQ",
"VPLMLGAP",
"AGKGFAVV",
"GFIKVKQY",
"SWGFTTPD",
"LRAHLLSW",
"DNFFELGG",
"RAHLLSWG",
"AGGAYVPL",
"GGAYVPLD",
"ELLVVIAI",
"VEAARAGE",
"GGIAHDFN",
"LGDPIEAQ",
"GDPIEAQA",
"LGAINFIT",
"HRDLKPSN",
"QDGASNGL",
"EFLANMSH",
"PIVLPEKD",
"GSTGTPKG",
"ILKAGGAY",
"ELGGHSLL",
"IVIYQYVD",
"ELRAHLLS",
"VARLGGDE",
"GQTGSGKT",
"AENREILK",
"QHLLKWGF",
"LLSWGFTT",
"SNGLTAPN",
"SGGQQQRV",
"LSWGFTTP",
"IFEPFFTT",
"HLLSWGFT",
"RLGGDEFA",
"ARYGGEEF",
"KQLCKLLR",
"SGGQRQRV",
"TGYSSLSY",
"QIYNVIVT",
"HRDLKPAN",
"DQIYNVIV",
"IGPNGAGK",
"ADEMGLGK",
"MNLPGRWK",
"IYNVIVTA",
"DTVLEEIN",
"TVLEEINL",
"NGLTAPNG",
"YGPPGTGK",
"KVKQLCKL",
"IKVKQLCK",
"NWASQIYA",
"VKQLCKLL",
"DVYSFGVV",
"RVAIARAL",
"WASQIYAG",
"IVLPEKDS",
"AARAGEHG",
"LYGLKQAP",
"EAARAGEH",
"ILDFSKIE",
"NMSHELRT",
"VLPEKDSW",
"SDVYSFGV",
"SGAGKSTL",
"AHDFNNLL",
"DLEIEQHR",
"AEQTNLLA",
"LALNAAVE",
"SDLEIEQH",
"ELRTPLNA",
"ASQIYAGI",
"AGRGFAVV",
"HRDIKPAN",
"PVHGVYYD",
"KSDVYSFG",
"QVKIRGYR",
"EIRTPMNG",
"VGSDLEIE",
"QNPEIVIY",
"GPSGSGKT",
"EHLLKWGF",
"LIEICGKK",
"IGTVLIGP",
"HAFIMIFF",
"LEEINLPG",
"AMDPQQRL",
"GLTAPNGP",
"VLEEINLP",
"DILDFSKI",
"GDSGGPLV",
"SGCGKSTL",
"AYGQTGSG",
"RAGVSSFG",
"DPIEAQAL",
"GSAVNQDG",
"AIDDFGTG",
"GAYVPLDP",
"KGTGLGLS",
"GDDQIYNV",
"VHGVYYDP",
"LADEMGLG",
"SGGQRQRI",
"SGGQKQRI",
"WTVQPIEL",
"GPSGCGKS",
"LDFSKIEA",
"GTLFLDEI",
"TGLGLAIV",
"GLGLAIVK",
"GSDLEIEQ",
"NKSVTVLD",
"NLYGPTEA",
"GESGTGKE",
"SQIYAGIK",
"AVNQDGAS",
"NGAGTGWT",
"SILGAVNF",
"SSILGAVN",
"TVQPIELP",
"IFDPFFTT",
"PPGTGKTL",
"KILEPFRA",
"QGPPGTGK",
"IKEALLDT",
"ILGAVNFI",
"ANMSHELR",
"LPLTPNGK",
"ALDDFGTG",
"IAHRLSTI",
"DDQVKIRG",
"ENGAGTGW",
"MYRTGDLV",
"DQTNLLAL",
"QIKEALLD",
"FFDPAGGG",
"LDEPTSGL",
"NGSGKTTL",
"IELLVVIA",
"FIKVKQYD",
"AHLLSWGF",
"GFFVNTLV",
"GCGKSTLL",
"IFTSGSTG",
"VENGAGTG",
"HRDIKPSN",
"AFTIPSVN",
"TAFTIPSV",
"DDQIYNVI",
"FTIPSVNN",
"AHAFIMIF",
"YGLKQAPR",
"GQIKEALL",
"IAEQTNLL",
"DEPTSALD",
"DDTVLEDM",
"SEFLANMS",
"LLGPNGAG",
"LRGAKALT",
"KSEFLANM",
"INPGNSGG",
"LLRGAKAL",
"LLLDEPTN",
"GPSGCGKT",
"IIHRDLKP",
"LCKLLRGT",
"NFRKYTAF",
"ENREILKE",
"STGTPKGV",
"GYRIELGE",
"TAHAFIMI",
"QIYAGIKV",
"AINFITTI",
"INDILDFS",
"LSGGERQR",
"EMNLPGRW",
"CKLLRGTK",
"VTAHAFIM",
"QRPLVTVK",
"EEMNLPGR",
"RRAGVSSF",
"KALYGLKQ",
"EIRTPMNA",
"TAPNGPSQ",
"HRDLAARN",
"RLGGDEFV",
"SGGQKQRV",
"AGEAGKGF",
"VNQDGASN",
"KIRGYRIE",
"TGSGKTLA",
"GASVDLAI",
"HAFVMIFF",
"LCKLLRGA",
"CKLLRGAK",
"LLRGTKAL",
"LRGTKALT",
"NLLSNAVK",
"ASVDLAIF",
"VADEVRKL",
"NREILKEP",
"DDMGLGKT",
"GSPAIFQA",
"QRVALARA",
"ARGYLNRP",
"DILVNNAG",
"REILKEPV",
"LANMSHEL",
"TIPSVNNE",
"KARLVAKG",
"LALNATIE",
"YGPTETTV",
"SPAIFQAS",
"GHTQAAAG",
"PAIFQASM",
"TGLGLSIS",
"FDKTGTLT",
"GSGKSTLA",
"MPFGLTNA",
"KPGMDGPR",
"IGDDQIYN",
"VVADEVRK",
"ALYGLKQA",
"KNKSVTVL",
"AFVMIFFM",
"FDPAGGGD",
"AHAFVMIF",
"LTAPNGPS",
"SPIDTVPV",
"ILADEMGL",
"EILKEPVH",
"GGTLFLDE",
"ILKEPVHG",
"GFAVVASE",
"FQASMTKI",
"DFSKIEAG",
"QASMTKIL",
"IFQASMTK",
"ISPIDTVP",
"EPVHGVYY",
"PIEAQALL",
"LNATIEAA",
"GPSGAGKS",
"PISPIDTV",
"TAHAFVMI",
"VMPFGLTN",
"PSVNNETP",
"LRTPLNAI",
"IVTAHAFI",
"SVNNETPG",
"RVKQWPLT",
"HGVYYDPS",
"SAVNQDGA",
"RGSAVNQD",
"KNPEIVIY",
"LLLDEATS",
"PSGCGKST",
"WDTAGQER",
"RGYRIELG",
"IPSVNNET",
"ALNATIEA",
"PLTEEAEL",
"KVRQYDQV" };