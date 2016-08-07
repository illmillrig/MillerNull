
#include "IconShapes.h"




iconShape IconShapes::null = {

	//Vertices
	std::vector<std::array<float, 3>>{
		{-0.5f, 0.0f, 0.0f},
		{ 0.5f, 0.0f, 0.0f },
		{ 0.0f, -0.5f, 0.0f },
		{ 0.0f, 0.5f, 0.0f },
		{ 0.0f, 0.0f, -0.5f },
		{ 0.0f, 0.0f, 0.5f }
		},

	//Normals
	std::vector<std::array<float, 3>>{
		{-0.5f, 0.0f, 0.0f},
		{ 0.5f, 0.0f, 0.0f },
		{ 0.0f, -0.5f, 0.0f },
		{ 0.0f, 0.5f, 0.0f },
		{ 0.0f, 0.0f, -0.5f },
		{ 0.0f, 0.0f, 0.5f }
		},

	//TriIndices
	std::vector<unsigned int>{ 0, 0 },

	//EdgeIndices
	std::vector<unsigned int>{ 0, 1, 2, 3, 4, 5 }
		
};


iconShape IconShapes::cube = {

	std::vector<std::array<float, 3>> {
		{-0.5f, -0.5f, 0.5f},
		{0.5f, -0.5f, 0.5f},
		{-0.5f, 0.5f, 0.5f},
		{0.5f, 0.5f, 0.5f},
		{-0.5f, 0.5f, -0.5f},
		{0.5f, 0.5f, -0.5f},
		{-0.5f, -0.5f, -0.5f},
		{0.5f, -0.5f, -0.5f}
		},

	std::vector<std::array<float, 3>> {
		{-0.5773502588272095f, -0.5773502588272095f, 0.5773501992225647f},
		{0.5773502588272095f, -0.5773502588272095f, 0.5773503184318542f},
		{-0.5773502588272095f, 0.5773502588272095f, 0.5773503184318542f},
		{0.5773502588272095f, 0.5773502588272095f, 0.5773501992225647f},
		{-0.5773502588272095f, 0.5773502588272095f, -0.5773501992225647f},
		{0.5773502588272095f, 0.5773502588272095f, -0.5773503184318542f},
		{-0.5773502588272095f, -0.5773502588272095f, -0.5773503184318542f},
		{0.5773502588272095f, -0.5773502588272095f, -0.5773501992225647f}
		},

	std::vector<unsigned int> {
		0, 1, 2, 2, 1, 3, 2, 3, 4, 4, 3, 5, 4, 5, 6, 6, 5, 7, 6,
		7, 0, 0, 7, 1, 1, 7, 3, 3, 7, 5, 6, 0, 4, 4, 0, 2
		},

	std::vector<unsigned int>{
		0, 1, 2, 3, 4, 5, 6, 7, 0, 2, 1, 3, 2, 4, 3, 5, 4, 6, 5, 7, 6, 0, 7, 1
		}
};


iconShape IconShapes::sphere = {

	std::vector<std::array<float, 3>>{
		{0.17677675187587738f, -0.4619397521018982f, -0.07322320342063904f},
		{0.13529910147190094f, -0.4619397521018982f, -0.135298952460289f},
		{0.07322339713573456f, -0.4619397521018982f, -0.17677666246891022f},
		{9.694127101056438e-08f, -0.4619397521018982f, -0.19134171307086945f},
		{-0.07322322577238083f, -0.4619397521018982f, -0.1767767369747162f},
		{-0.1352989673614502f, -0.4619397521018982f, -0.13529908657073975f},
		{-0.1767766773700714f, -0.4619397521018982f, -0.07322337478399277f},
		{-0.19134172797203064f, -0.4619397521018982f, -6.842913080618018e-08f},
		{-0.176776722073555f, -0.4619397521018982f, 0.07322324812412262f},
		{-0.13529907166957855f, -0.4619397521018982f, 0.13529899716377258f},
		{-0.07322334498167038f, -0.4619397521018982f, 0.1767766922712326f},
		{-2.8512140204384195e-08f, -0.4619397521018982f, 0.19134172797203064f},
		{0.0732232853770256f, -0.4619397521018982f, 0.1767767071723938f},
		{0.13529902696609497f, -0.4619397521018982f, 0.13529904186725616f},
		{0.1767767071723938f, -0.4619397521018982f, 0.07322331517934799f},
		{0.19134172797203064f, -0.4619397521018982f, 0.0f},
		{0.3266408145427704f, -0.3535533845424652f, -0.13529883325099945f},
		{0.25000011920928955f, -0.3535533845424652f, -0.24999985098838806f},
		{0.1352991908788681f, -0.3535533845424652f, -0.32664063572883606f},
		{1.7912410044118587e-07f, -0.3535533845424652f, -0.3535533547401428f},
		{-0.13529886305332184f, -0.3535533845424652f, -0.326640784740448f},
		{-0.24999988079071045f, -0.3535533845424652f, -0.25000008940696716f},
		{-0.32664069533348083f, -0.3535533845424652f, -0.13529914617538452f},
		{-0.3535533845424652f, -0.3535533845424652f, -1.2644053981603065e-07f},
		{-0.3266407549381256f, -0.3535533845424652f, 0.13529890775680542f},
		{-0.2500000596046448f, -0.3535533845424652f, 0.24999992549419403f},
		{-0.13529908657073975f, -0.3535533845424652f, 0.32664069533348083f},
		{-5.2683560625155224e-08f, -0.3535533845424652f, 0.3535533845424652f},
		{0.1352989822626114f, -0.3535533845424652f, 0.3266407549381256f},
		{0.2499999701976776f, -0.3535533845424652f, 0.25f},
		{0.3266407251358032f, -0.3535533845424652f, 0.13529902696609497f},
		{0.3535533845424652f, -0.3535533845424652f, 0.0f},
		{0.4267767667770386f, -0.19134171307086945f, -0.1767764389514923f},
		{0.32664090394973755f, -0.19134171307086945f, -0.3266405463218689f},
		{0.17677690088748932f, -0.19134171307086945f, -0.42677655816078186f},
		{2.3403691784551484e-07f, -0.19134171307086945f, -0.4619397222995758f},
		{-0.1767764836549759f, -0.19134171307086945f, -0.4267767369747162f},
		{-0.3266405761241913f, -0.19134171307086945f, -0.32664087414741516f},
		{-0.42677661776542664f, -0.19134171307086945f, -0.17677685618400574f},
		{-0.4619397521018982f, -0.19134171307086945f, -1.6520252188456652e-07f},
		{-0.4267767369747162f, -0.19134171307086945f, 0.17677654325962067f},
		{-0.3266408145427704f, -0.19134171307086945f, 0.32664063572883606f},
		{-0.17677676677703857f, -0.19134171307086945f, 0.426776647567749f},
		{-6.883438885552096e-08f, -0.19134171307086945f, 0.4619397521018982f},
		{0.17677663266658783f, -0.19134171307086945f, 0.4267767071723938f},
		{0.32664069533348083f, -0.19134171307086945f, 0.3266407549381256f},
		{0.4267766773700714f, -0.19134171307086945f, 0.1767767071723938f},
		{0.4619397521018982f, -0.19134171307086945f, 0.0f},
		{0.46193987131118774f, 0.0f, -0.19134144484996796f},
		{0.35355356335639954f, 0.0f, -0.3535531759262085f},
		{0.19134195148944855f, 0.0f, -0.46193963289260864f},
		{2.5331974029541016e-07f, 0.0f, -0.4999999701976776f},
		{-0.19134148955345154f, 0.0f, -0.46193984150886536f},
		{-0.35355323553085327f, 0.0f, -0.35355353355407715f},
		{-0.4619396924972534f, 0.0f, -0.19134189188480377f},
		{-0.5f, 0.0f, -1.7881393432617188e-07f},
		{-0.46193981170654297f, 0.0f, 0.1913415640592575f},
		{-0.3535534739494324f, 0.0f, 0.35355329513549805f},
		{-0.1913418024778366f, 0.0f, 0.4619397222995758f},
		{-7.450580596923828e-08f, 0.0f, 0.5f},
		{0.19134165346622467f, 0.0f, 0.4619397819042206f},
		{0.3535533547401428f, 0.0f, 0.3535534143447876f},
		{0.4619397521018982f, 0.0f, 0.19134172797203064f},
		{0.5f, 0.0f, 0.0f},
		{0.4267767667770386f, 0.19134171307086945f, -0.1767764389514923f},
		{0.32664090394973755f, 0.19134171307086945f, -0.3266405463218689f},
		{0.17677690088748932f, 0.19134171307086945f, -0.42677655816078186f},
		{2.3403691784551484e-07f, 0.19134171307086945f, -0.4619397222995758f},
		{-0.1767764836549759f, 0.19134171307086945f, -0.4267767369747162f},
		{-0.3266405761241913f, 0.19134171307086945f, -0.32664087414741516f},
		{-0.42677661776542664f, 0.19134171307086945f, -0.17677685618400574f},
		{-0.4619397521018982f, 0.19134171307086945f, -1.6520252188456652e-07f},
		{-0.4267767369747162f, 0.19134171307086945f, 0.17677654325962067f},
		{-0.3266408145427704f, 0.19134171307086945f, 0.32664063572883606f},
		{-0.17677676677703857f, 0.19134171307086945f, 0.426776647567749f},
		{-6.883438885552096e-08f, 0.19134171307086945f, 0.4619397521018982f},
		{0.17677663266658783f, 0.19134171307086945f, 0.4267767071723938f},
		{0.32664069533348083f, 0.19134171307086945f, 0.3266407549381256f},
		{0.4267766773700714f, 0.19134171307086945f, 0.1767767071723938f},
		{0.4619397521018982f, 0.19134171307086945f, 0.0f},
		{0.3266408145427704f, 0.3535533845424652f, -0.13529883325099945f},
		{0.25000011920928955f, 0.3535533845424652f, -0.24999985098838806f},
		{0.1352991908788681f, 0.3535533845424652f, -0.32664063572883606f},
		{1.7912410044118587e-07f, 0.3535533845424652f, -0.3535533547401428f},
		{-0.13529886305332184f, 0.3535533845424652f, -0.326640784740448f},
		{-0.24999988079071045f, 0.3535533845424652f, -0.25000008940696716f},
		{-0.32664069533348083f, 0.3535533845424652f, -0.13529914617538452f},
		{-0.3535533845424652f, 0.3535533845424652f, -1.2644053981603065e-07f},
		{-0.3266407549381256f, 0.3535533845424652f, 0.13529890775680542f},
		{-0.2500000596046448f, 0.3535533845424652f, 0.24999992549419403f},
		{-0.13529908657073975f, 0.3535533845424652f, 0.32664069533348083f},
		{-5.2683560625155224e-08f, 0.3535533845424652f, 0.3535533845424652f},
		{0.1352989822626114f, 0.3535533845424652f, 0.3266407549381256f},
		{0.2499999701976776f, 0.3535533845424652f, 0.25f},
		{0.3266407251358032f, 0.3535533845424652f, 0.13529902696609497f},
		{0.3535533845424652f, 0.3535533845424652f, 0.0f},
		{0.17677675187587738f, 0.4619397521018982f, -0.07322320342063904f},
		{0.13529910147190094f, 0.4619397521018982f, -0.135298952460289f},
		{0.07322339713573456f, 0.4619397521018982f, -0.17677666246891022f},
		{9.694127101056438e-08f, 0.4619397521018982f, -0.19134171307086945f},
		{-0.07322322577238083f, 0.4619397521018982f, -0.1767767369747162f},
		{-0.1352989673614502f, 0.4619397521018982f, -0.13529908657073975f},
		{-0.1767766773700714f, 0.4619397521018982f, -0.07322337478399277f},
		{-0.19134172797203064f, 0.4619397521018982f, -6.842913080618018e-08f},
		{-0.176776722073555f, 0.4619397521018982f, 0.07322324812412262f},
		{-0.13529907166957855f, 0.4619397521018982f, 0.13529899716377258f},
		{-0.07322334498167038f, 0.4619397521018982f, 0.1767766922712326f},
		{-2.8512140204384195e-08f, 0.4619397521018982f, 0.19134172797203064f},
		{0.0732232853770256f, 0.4619397521018982f, 0.1767767071723938f},
		{0.13529902696609497f, 0.4619397521018982f, 0.13529904186725616f},
		{0.1767767071723938f, 0.4619397521018982f, 0.07322331517934799f},
		{0.19134172797203064f, 0.4619397521018982f, 0.0f},
		{0.0f, -0.5f, 0.0f},
		{0.0f, 0.5f, 0.0}
		},

	std::vector<std::array<float, 3>>{
		{0.3724091351032257f, -0.9151591658592224f, -0.15425661206245422f},
		{0.2850297689437866f, -0.9151591658592224f, -0.2850293815135956f},
		{0.15425707399845123f, -0.9151589870452881f, -0.37240928411483765f},
		{1.3227436568286066e-07f, -0.9151591062545776f, -0.4030928611755371f},
		{-0.15425671637058258f, -0.9151591062545776f, -0.3724093437194824f},
		{-0.2850293815135956f, -0.9151591062545776f, -0.28502994775772095f},
		{-0.37240907549858093f, -0.9151591658592224f, -0.15425701439380646f},
		{-0.40309274196624756f, -0.9151591658592224f, 9.920577070943182e-08f},
		{-0.3724091649055481f, -0.9151591658592224f, 0.15425673127174377f},
		{-0.28502964973449707f, -0.9151591062545776f, 0.2850295901298523f},
		{-0.15425695478916168f, -0.9151591062545776f, 0.37240925431251526f},
		{5.266479163879012e-08f, -0.9151591062545776f, 0.4030928611755371f},
		{0.15425686538219452f, -0.9151591062545776f, 0.3724091947078705f},
		{0.2850295901298523f, -0.9151591062545776f, 0.2850295901298523f},
		{0.3724091351032257f, -0.9151591062545776f, 0.1542568951845169f},
		{0.403092622756958f, -0.9151591658592224f, 3.429335038163117e-08f},
		{0.6641385555267334f, -0.6951566338539124f, -0.27509480714797974f},
		{0.5083099007606506f, -0.6951566338539124f, -0.5083092451095581f},
		{0.27509555220603943f, -0.6951566338539124f, -0.6641381978988647f},
		{3.553895453478617e-07f, -0.6951567530632019f, -0.7188582420349121f},
		{-0.27509477734565735f, -0.6951566338539124f, -0.6641386151313782f},
		{-0.5083093047142029f, -0.6951566934585571f, -0.5083097815513611f},
		{-0.6641382575035095f, -0.6951566934585571f, -0.2750953137874603f},
		{-0.7188583612442017f, -0.6951566934585571f, -1.6899645061130286e-07f},
		{-0.6641386151313782f, -0.6951565742492676f, 0.2750948667526245f},
		{-0.5083097815513611f, -0.6951568126678467f, 0.5083093643188477f},
		{-0.2750953435897827f, -0.6951567530632019f, 0.6641381978988647f},
		{-2.4355367145290074e-07f, -0.6951567530632019f, 0.7188582420349121f},
		{0.2750951051712036f, -0.6951568126678467f, 0.6641384363174438f},
		{0.5083096027374268f, -0.6951566934585571f, 0.508309543132782f},
		{0.6641383767127991f, -0.6951566338539124f, 0.275095134973526f},
		{0.7188582420349121f, -0.6951566934585571f, 9.692440983144479e-08f},
		{0.8566957712173462f, -0.3743670582771301f, -0.35485461354255676f},
		{0.6556866765022278f, -0.37436702847480774f, -0.6556861996650696f},
		{0.3548552393913269f, -0.37436696887016296f, -0.8566955327987671f},
		{3.770849730244663e-07f, -0.37436696887016296f, -0.9272806644439697f},
		{-0.35485443472862244f, -0.3743669390678406f, -0.8566957116127014f},
		{-0.6556860208511353f, -0.37436702847480774f, -0.6556868553161621f},
		{-0.8566954731941223f, -0.3743670880794525f, -0.3548552989959717f},
		{-0.9272805452346802f, -0.37436699867248535f, -3.5445981438897434e-07f},
		{-0.8566955924034119f, -0.37436699867248535f, 0.35485461354255676f},
		{-0.6556865572929382f, -0.3743670582771301f, 0.6556862592697144f},
		{-0.3548552095890045f, -0.3743670582771301f, 0.8566954731941223f},
		{-1.6591738472016004e-07f, -0.37436702847480774f, 0.9272806644439697f},
		{0.35485485196113586f, -0.37436696887016296f, 0.8566957116127014f},
		{0.6556863784790039f, -0.37436702847480774f, 0.6556864976882935f},
		{0.8566955924034119f, -0.3743669390678406f, 0.3548550009727478f},
		{0.9272805452346802f, -0.37436699867248535f, 9.804207223851336e-08f},
		{0.9238796830177307f, -4.039733170202453e-08f, -0.382683128118515f},
		{0.7071071267127991f, 2.524833320194375e-08f, -0.7071064114570618f},
		{0.38268396258354187f, 7.57449925004039e-09f, -0.9238793253898621f},
		{4.3174651409572107e-07f, -1.0099333813684552e-08f, -1.0f},
		{-0.3826829195022583f, 1.0099332925506133e-08f, -0.9238796830177307f},
		{-0.7071064114570618f, 5.807116565392789e-08f, -0.7071071267127991f},
		{-0.9238793849945068f, -1.413906858260816e-07f, -0.3826838731765747f},
		{-1.0f, 1.1614233841328314e-07f, -3.282283387306961e-07f},
		{-0.9238796234130859f, 7.574500671125861e-08f, 0.3826832175254822f},
		{-0.7071069478988647f, -5.3021498302996406e-08f, 0.7071065902709961f},
		{-0.3826836943626404f, -3.029799700016156e-08f, 0.9238794445991516f},
		{-9.594366190412984e-08f, -7.57449925004039e-09f, 1.0f},
		{0.3826833963394165f, -7.57449925004039e-09f, 0.9238796234130859f},
		{0.7071067094802856f, 2.0198665851012265e-08f, 0.7071068286895752f},
		{0.9238794445991516f, 5.3021498302996406e-08f, 0.38268351554870605f},
		{1.0000001192092896f, -8.584432720226687e-08f, 1.4644032830801734e-07f},
		{0.8566957116127014f, 0.37436702847480774f, -0.3548545837402344f},
		{0.6556868553161621f, 0.3743669390678406f, -0.65568608045578f},
		{0.35485532879829407f, 0.37436696887016296f, -0.8566954731941223f},
		{3.7205708736109955e-07f, 0.37436699867248535f, -0.9272805452346802f},
		{-0.35485443472862244f, 0.37436699867248535f, -0.8566957116127014f},
		{-0.6556861400604248f, 0.3743669390678406f, -0.6556867361068726f},
		{-0.8566954135894775f, 0.37436699867248535f, -0.35485532879829407f},
		{-0.927280604839325f, 0.3743670880794525f, -2.878415159557335e-07f},
		{-0.8566957116127014f, 0.37436702847480774f, 0.3548547029495239f},
		{-0.655686616897583f, 0.37436696887016296f, 0.6556862592697144f},
		{-0.3548550605773926f, 0.37436702847480774f, 0.8566955924034119f},
		{-1.5334788372456387e-07f, 0.37436696887016296f, 0.927280604839325f},
		{0.3548548221588135f, 0.37436696887016296f, 0.8566957116127014f},
		{0.6556863784790039f, 0.3743670582771301f, 0.6556864976882935f},
		{0.8566955327987671f, 0.3743670582771301f, 0.3548550009727478f},
		{0.9272806644439697f, 0.37436696887016296f, 1.1061158744496424e-07f},
		{0.6641384363174438f, 0.6951568126678467f, -0.27509474754333496f},
		{0.5083097219467163f, 0.6951566934585571f, -0.5083092451095581f},
		{0.27509549260139465f, 0.6951566338539124f, -0.6641381978988647f},
		{4.231123682529869e-07f, 0.6951566338539124f, -0.7188582420349121f},
		{-0.27509474754333496f, 0.6951567530632019f, -0.6641384363174438f},
		{-0.5083093047142029f, 0.6951567530632019f, -0.5083096623420715f},
		{-0.6641384363174438f, 0.6951566934585571f, -0.27509546279907227f},
		{-0.7188583612442017f, 0.6951566934585571f, -3.1562572644361353e-07f},
		{-0.6641383767127991f, 0.6951567530632019f, 0.2750948667526245f},
		{-0.5083097219467163f, 0.6951566934585571f, 0.5083093047142029f},
		{-0.27509522438049316f, 0.6951566934585571f, 0.6641383171081543f},
		{-1.8142263513709622e-07f, 0.6951566338539124f, 0.7188582420349121f},
		{0.275095134973526f, 0.6951568126678467f, 0.6641384363174438f},
		{0.5083096623420715f, 0.6951566934585571f, 0.5083094239234924f},
		{0.6641384363174438f, 0.6951566338539124f, 0.2750951647758484f},
		{0.7188583016395569f, 0.6951565742492676f, 1.7334558322090743e-07f},
		{0.37240907549858093f, 0.9151591658592224f, -0.1542566865682602f},
		{0.28502970933914185f, 0.9151591658592224f, -0.28502950072288513f},
		{0.15425708889961243f, 0.9151589870452881f, -0.3724091947078705f},
		{1.445219908191575e-07f, 0.9151591062545776f, -0.4030926525592804f},
		{-0.15425673127174377f, 0.9151591062545776f, -0.37240928411483765f},
		{-0.28502944111824036f, 0.9151591062545776f, -0.2850300073623657f},
		{-0.37240901589393616f, 0.9151591658592224f, -0.1542568802833557f},
		{-0.40309271216392517f, 0.9151591658592224f, 9.553148316854276e-08f},
		{-0.3724091351032257f, 0.9151591658592224f, 0.15425673127174377f},
		{-0.28502973914146423f, 0.9151591062545776f, 0.28502947092056274f},
		{-0.15425699949264526f, 0.9151591658592224f, 0.3724091351032257f},
		{-1.4329722830552782e-07f, 0.9151591658592224f, 0.403092622756958f},
		{0.15425683557987213f, 0.9151591062545776f, 0.37240925431251526f},
		{0.28502950072288513f, 0.9151591658592224f, 0.2850296199321747f},
		{0.37240904569625854f, 0.9151592254638672f, 0.15425671637058258f},
		{0.4030926525592804f, 0.9151591658592224f, -1.1512767628119036e-07f},
		{1.7275270991490288e-08f, -1.0f, 6.617045755774598e-08f},
		{1.3573429491486877e-08f, 1.0f, 5.429371796594751e-08f}
		},

	std::vector<unsigned int>{
		0, 1, 16, 16, 1, 17, 1, 2, 17, 17, 2, 18, 2,
		3, 18, 18, 3, 19, 3, 4, 19, 19, 4, 20, 4, 5, 20, 20, 5, 21, 5,
		6, 21, 21, 6, 22, 6, 7, 22, 22, 7, 23, 7, 8, 23, 23, 8, 24, 8,
		9, 24, 24, 9, 25, 9, 10, 25, 25, 10, 26, 10, 11, 26, 26, 11, 27,
		11, 12, 27, 27, 12, 28, 12, 13, 28, 28, 13, 29, 13, 14, 29, 29,
		14, 30, 14, 15, 30, 30, 15, 31, 15, 0, 31, 31, 0, 16, 16, 17,
		32, 32, 17, 33, 17, 18, 33, 33, 18, 34, 18, 19, 34, 34, 19, 35,
		19, 20, 35, 35, 20, 36, 20, 21, 36, 36, 21, 37, 21, 22, 37, 37,
		22, 38, 22, 23, 38, 38, 23, 39, 23, 24, 39, 39, 24, 40, 24, 25,
		40, 40, 25, 41, 25, 26, 41, 41, 26, 42, 26, 27, 42, 42, 27, 43,
		27, 28, 43, 43, 28, 44, 28, 29, 44, 44, 29, 45, 29, 30, 45, 45,
		30, 46, 30, 31, 46, 46, 31, 47, 31, 16, 47, 47, 16, 32, 32, 33,
		48, 48, 33, 49, 33, 34, 49, 49, 34, 50, 34, 35, 50, 50, 35, 51,
		35, 36, 51, 51, 36, 52, 36, 37, 52, 52, 37, 53, 37, 38, 53, 53,
		38, 54, 38, 39, 54, 54, 39, 55, 39, 40, 55, 55, 40, 56, 40, 41,
		56, 56, 41, 57, 41, 42, 57, 57, 42, 58, 42, 43, 58, 58, 43, 59,
		43, 44, 59, 59, 44, 60, 44, 45, 60, 60, 45, 61, 45, 46, 61, 61,
		46, 62, 46, 47, 62, 62, 47, 63, 47, 32, 63, 63, 32, 48, 48, 49,
		64, 64, 49, 65, 49, 50, 65, 65, 50, 66, 50, 51, 66, 66, 51, 67,
		51, 52, 67, 67, 52, 68, 52, 53, 68, 68, 53, 69, 53, 54, 69, 69,
		54, 70, 54, 55, 70, 70, 55, 71, 55, 56, 71, 71, 56, 72, 56, 57,
		72, 72, 57, 73, 57, 58, 73, 73, 58, 74, 58, 59, 74, 74, 59, 75,
		59, 60, 75, 75, 60, 76, 60, 61, 76, 76, 61, 77, 61, 62, 77, 77,
		62, 78, 62, 63, 78, 78, 63, 79, 63, 48, 79, 79, 48, 64, 64, 65,
		80, 80, 65, 81, 65, 66, 81, 81, 66, 82, 66, 67, 82, 82, 67, 83,
		67, 68, 83, 83, 68, 84, 68, 69, 84, 84, 69, 85, 69, 70, 85, 85,
		70, 86, 70, 71, 86, 86, 71, 87, 71, 72, 87, 87, 72, 88, 72, 73,
		88, 88, 73, 89, 73, 74, 89, 89, 74, 90, 74, 75, 90, 90, 75, 91,
		75, 76, 91, 91, 76, 92, 76, 77, 92, 92, 77, 93, 77, 78, 93, 93,
		78, 94, 78, 79, 94, 94, 79, 95, 79, 64, 95, 95, 64, 80, 80, 81,
		96, 96, 81, 97, 81, 82, 97, 97, 82, 98, 82, 83, 98, 98, 83, 99,
		83, 84, 99, 99, 84, 100, 84, 85, 100, 100, 85, 101, 85, 86, 101,
		101, 86, 102, 86, 87, 102, 102, 87, 103, 87, 88, 103, 103, 88, 104,
		88, 89, 104, 104, 89, 105, 89, 90, 105, 105, 90, 106, 90, 91, 106,
		106, 91, 107, 91, 92, 107, 107, 92, 108, 92, 93, 108, 108, 93, 109,
		93, 94, 109, 109, 94, 110, 94, 95, 110, 110, 95, 111, 95, 80, 111,
		111, 80, 96, 1, 0, 112, 2, 1, 112, 3, 2, 112, 4, 3, 112, 5, 4,
		112, 6, 5, 112, 7, 6, 112, 8, 7, 112, 9, 8, 112, 10, 9, 112, 11,
		10, 112, 12, 11, 112, 13, 12, 112, 14, 13, 112, 15, 14, 112, 0,
		15, 112, 96, 97, 113, 97, 98, 113, 98, 99, 113, 99, 100, 113, 100,
		101, 113, 101, 102, 113, 102, 103, 113, 103, 104, 113, 104, 105,
		113, 105, 106, 113, 106, 107, 113, 107, 108, 113, 108, 109, 113,
		109, 110, 113, 110, 111, 113, 111, 96, 113
		},

	std::vector<unsigned int>{
		48, 49, 49, 50, 50, 51, 51, 52, 52, 53, 53,
		54, 54, 55, 55, 56, 56, 57, 57, 58, 58, 59, 59, 60, 60, 61, 61,
		62, 62, 63, 63, 48, 3, 19, 7, 23, 11, 27, 15, 31, 19, 35, 23,
		39, 27, 43, 31, 47, 35, 51, 39, 55, 43, 59, 47, 63, 51, 67, 55,
		71, 59, 75, 63, 79, 67, 83, 71, 87, 75, 91, 79, 95, 83, 99, 87,
		103, 91, 107, 95, 111, 112, 3, 112, 7, 112, 11, 112, 15, 99, 113,
		103, 113, 107, 113, 111, 113
		}

};


iconShape IconShapes::cylinder = {

	std::vector<std::array<float, 3>>{
		{0.46193987131118774f, -0.5f, -0.19134144484996796f},
		{0.35355356335639954f, -0.5f, -0.3535531759262085f},
		{0.19134195148944855f, -0.5f, -0.46193963289260864f},
		{2.5331974029541016e-07f, -0.5f, -0.4999999701976776f},
		{-0.19134148955345154f, -0.5f, -0.46193984150886536f},
		{-0.35355323553085327f, -0.5f, -0.35355353355407715f},
		{-0.4619396924972534f, -0.5f, -0.19134189188480377f},
		{-0.5f, -0.5f, -1.7881393432617188e-07f},
		{-0.46193981170654297f, -0.5f, 0.1913415640592575f},
		{-0.3535534739494324f, -0.5f, 0.35355329513549805f},
		{-0.1913418024778366f, -0.5f, 0.4619397222995758f},
		{-7.450580596923828e-08f, -0.5f, 0.5f},
		{0.19134165346622467f, -0.5f, 0.4619397819042206f},
		{0.3535533547401428f, -0.5f, 0.3535534143447876f},
		{0.4619397521018982f, -0.5f, 0.19134172797203064f},
		{0.5f, -0.5f, 0.0f},
		{0.46193987131118774f, 0.5f, -0.19134144484996796f},
		{0.35355356335639954f, 0.5f, -0.3535531759262085f},
		{0.19134195148944855f, 0.5f, -0.46193963289260864f},
		{2.5331974029541016e-07f, 0.5f, -0.4999999701976776f},
		{-0.19134148955345154f, 0.5f, -0.46193984150886536f},
		{-0.35355323553085327f, 0.5f, -0.35355353355407715f},
		{-0.4619396924972534f, 0.5f, -0.19134189188480377f},
		{-0.5f, 0.5f, -1.7881393432617188e-07f},
		{-0.46193981170654297f, 0.5f, 0.1913415640592575f},
		{-0.3535534739494324f, 0.5f, 0.35355329513549805f},
		{-0.1913418024778366f, 0.5f, 0.4619397222995758f},
		{-7.450580596923828e-08f, 0.5f, 0.5f},
		{0.19134165346622467f, 0.5f, 0.4619397819042206f},
		{0.3535533547401428f, 0.5f, 0.3535534143447876f},
		{0.4619397521018982f, 0.5f, 0.19134172797203064f},
		{0.5f, 0.5f, 0.0f},
		{0.0f, -0.5f, 0.0f},
		{0.0f, 0.5f, 0.0f}
		},

	std::vector<std::array<float, 3>>{
		{0.6894014477729797f, -0.6657188534736633f, -0.28555911779403687f},
		{0.5276451706886292f, -0.6657189130783081f, -0.5276446342468262f},
		{0.28555968403816223f, -0.6657188534736633f, -0.6894012093544006f},
		{3.834263679891592e-07f, -0.6657187938690186f, -0.7462026476860046f},
		{-0.2855590283870697f, -0.6657188534736633f, -0.6894014477729797f},
		{-0.527644693851471f, -0.6657188534736633f, -0.5276451110839844f},
		{-0.6894012093544006f, -0.6657188534736633f, -0.28555965423583984f},
		{-0.7462027072906494f, -0.6657189130783081f, -2.5261033442802727e-07f},
		{-0.689401388168335f, -0.6657188534736633f, 0.28555911779403687f},
		{-0.5276450514793396f, -0.6657189130783081f, 0.5276448130607605f},
		{-0.28555944561958313f, -0.6657189130783081f, 0.6894012689590454f},
		{-1.5156619781464542e-07f, -0.6657189130783081f, 0.7462027072906494f},
		{0.28555920720100403f, -0.6657188534736633f, 0.689401388168335f},
		{0.52764493227005f, -0.6657189130783081f, 0.5276451110839844f},
		{0.6894012689590454f, -0.6657189726829529f, 0.28555944561958313f},
		{0.7462026476860046f, -0.6657188534736633f, 1.3803348508645286e-07f},
		{0.6894014477729797f, 0.6657189726829529f, -0.28555914759635925f},
		{0.5276451706886292f, 0.6657189130783081f, -0.5276447534561157f},
		{0.285559743642807f, 0.6657187342643738f, -0.6894012093544006f},
		{4.3845932395925047e-07f, 0.6657187938690186f, -0.7462026476860046f},
		{-0.2855589985847473f, 0.6657188534736633f, -0.6894014477729797f},
		{-0.5276446342468262f, 0.6657189726829529f, -0.5276451706886292f},
		{-0.6894012093544006f, 0.6657188534736633f, -0.28555962443351746f},
		{-0.7462026476860046f, 0.6657187938690186f, -2.1562094332239212e-07f},
		{-0.689401388168335f, 0.6657189726829529f, 0.28555920720100403f},
		{-0.5276451110839844f, 0.6657189130783081f, 0.5276448130607605f},
		{-0.28555962443351746f, 0.6657187938690186f, 0.6894012689590454f},
		{-1.001419533963599e-07f, 0.6657189130783081f, 0.7462027072906494f},
		{0.28555941581726074f, 0.6657189130783081f, 0.6894013285636902f},
		{0.5276449918746948f, 0.6657188534736633f, 0.5276449918746948f},
		{0.6894013285636902f, 0.6657188534736633f, 0.28555938601493835f},
		{0.7462025880813599f, 0.6657188534736633f, 9.292450897646631e-08f},
		{0.0f, -1.0000001192092896f, 0.0f},
		{0.0f, 1.0f, 0.0f}
		},

	std::vector<unsigned int>{
		0, 1, 16, 16, 1, 17, 1, 2, 17, 17, 2, 18, 2, 3, 18, 18, 3,
		19, 3, 4, 19, 19, 4, 20, 4, 5, 20, 20, 5, 21, 5, 6, 21, 21, 6, 22, 6, 7,
		22, 22, 7, 23, 7, 8, 23, 23, 8, 24, 8, 9, 24, 24, 9, 25, 9, 10, 25, 25,
		10, 26, 10, 11, 26, 26, 11, 27, 11, 12, 27, 27, 12, 28, 12, 13, 28, 28,
		13, 29, 13, 14, 29, 29, 14, 30, 14, 15, 30, 30, 15, 31, 15, 0, 31, 31,
		0, 16, 1, 0, 32, 2, 1, 32, 3, 2, 32, 4, 3, 32, 5, 4, 32, 6, 5, 32, 7, 6,
		32, 8, 7, 32, 9, 8, 32, 10, 9, 32, 11, 10, 32, 12, 11, 32, 13, 12, 32,
		14, 13, 32, 15, 14, 32, 0, 15, 32, 16, 17, 33, 17, 18, 33, 18, 19, 33,
		19, 20, 33, 20, 21, 33, 21, 22, 33, 22, 23, 33, 23, 24, 33, 24, 25, 33,
		25, 26, 33, 26, 27, 33, 27, 28, 33, 28, 29, 33, 29, 30, 33, 30, 31, 33,
		31, 16, 33
		},

	std::vector<unsigned int>{
		0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9,
		10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 0, 16, 17, 17, 18, 18,
		19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27,
		28, 28, 29, 29, 30, 30, 31, 31, 16, 3, 19, 7, 23, 11, 27, 15, 31, 32, 3,
		32, 7, 32, 11, 32, 15, 19, 33, 23, 33, 27, 33, 31, 33
		}

};


iconShape IconShapes::pyramid = {

	std::vector<std::array<float, 3>>{
		{-0.5f, -0.5f, 0.5f},
		{0.5f, -0.5f, 0.5f},
		{0.0f, 0.5f, 0.0f},
		{-0.5f, -0.5f, -0.5f},
		{0.5f, -0.5f, -0.5f}
		},

	std::vector<std::array<float, 3>>{
		{-0.6626290678977966f, -0.34906357526779175f, 0.6626290678977966f},
		{0.6626290678977966f, -0.349063515663147f, 0.6626290678977966f},
		{0.0f, 0.9999999403953552f, 0.0f},
		{-0.6626290678977966f, -0.349063515663147f, -0.6626290678977966f},
		{0.6626290678977966f, -0.34906357526779175f, -0.6626290678977966f}
		},

	std::vector<unsigned int>{
		0, 1, 2, 2, 4, 3, 3, 4, 0, 0, 4, 1, 1, 4, 2, 3, 0, 2
		},

	std::vector<unsigned int>{
		0, 1, 3, 4, 0, 2, 1, 2, 2, 3, 2, 4, 3, 0, 4, 1
		}

};


iconShape IconShapes::diamond = {

	std::vector<std::array<float, 3>>{
		{1.1708414668910026e-16f, 0.5f, 1.1696066516725834e-16f},
		{0.5f, 0.0f, -0.5f},
		{-0.5f, 1.6558199746599049e-16f, -0.5f},
		{-0.5f, 0.0f, 0.5f},
		{0.5f, -1.6558199746599049e-16f, 0.5f},
		{-1.1708414668910026e-16f, -0.5f, -1.1720762821094217e-16f}
		},

	std::vector<std::array<float, 3>>{
		{0.0f, 1.0f, 0.0f},
		{0.7071067094802856f, 0.0f, -0.7071067094802856f},
		{-0.7071067094802856f, 0.0f, -0.7071067094802856f},
		{-0.7071067094802856f, 0.0f, 0.7071067094802856f},
		{0.7071067094802856f, 0.0f, 0.7071067094802856f},
		{0.0f, -1.0f, 0.0f}
		},

	std::vector<unsigned int>{
		1, 2, 0, 2, 3, 0, 3, 4, 0, 0, 4, 1, 5, 2, 1, 5, 3, 2, 5, 4, 3, 5, 1, 4
		},

	std::vector<unsigned int>{
		1, 2, 2, 0, 0, 1, 2, 3, 3, 0, 3, 4, 4, 0, 4, 1, 5, 2, 1, 5, 5, 3, 5, 4
		}

};


iconShape IconShapes::wedge = {

	std::vector<std::array<float, 3>>{
		{-0.5f, -0.5f, 0.5f},
		{0.5f, -0.5f, 0.5f},
		{0.0f, 0.5f, 0.5f},
		{0.0f, 0.5f, -0.5f},
		{-0.5f, -0.5f, -0.5f},
		{0.5f, -0.5f, -0.5f}
		},

	std::vector<std::array<float, 3>>{
		{-0.7065854668617249f, -0.43669381737709045f, 0.556808352470398f},
		{0.7065854668617249f, -0.4366937577724457f, 0.556808352470398f},
		{-3.540753468200819e-08f, 0.834604024887085f, 0.5508502721786499f},
		{3.540753468200819e-08f, 0.834604024887085f, -0.5508502721786499f},
		{-0.7065854668617249f, -0.4366937577724457f, -0.556808352470398f},
		{0.7065854668617249f, -0.43669381737709045f, -0.556808352470398f}
		},

	std::vector<unsigned int>{
		0, 1, 2, 3, 5, 4, 4, 5, 0, 0, 5, 1, 1, 5, 2, 2, 5, 3, 4, 0, 3, 3, 0, 2
		},

	std::vector<unsigned int>{
		0, 1, 4, 5, 0, 2, 1, 2, 2, 3, 3, 4, 3, 5, 4, 0, 5, 1
		}

};


iconShape IconShapes::arrow = {

	std::vector<std::array<float, 3>>{
		{0.25f, -0.4999999701976776f, 0.25f},
		{-0.25f, -0.4999999701976776f, 0.25f},
		{0.25f, -0.4999999701976776f, -0.25f},
		{-0.25f, -0.4999999701976776f, -0.25f},
		{0.25f, -8.040613114788646e-17f, -0.25f},
		{-0.25f, -1.4163846715969995e-16f, -0.25f},
		{0.25f, 1.4163846715969995e-16f, 0.25f},
		{-0.25f, 8.040613114788646e-17f, 0.25f},
		{-6.123234262925839e-17f, 0.5f, -0.25f},
		{-6.123234262925839e-17f, 0.5f, 0.25f},
		{-0.4999999403953552f, -1.7225463185688425e-16f, -0.25f},
		{-0.4999999403953552f, 4.978996645070216e-17f, 0.25f},
		{0.5f, -4.978995983325726e-17f, -0.25f},
		{0.5f, 1.7225464509177405e-16f, 0.25f}
		},

	std::vector<std::array<float, 3>>{
		{0.5773502588272095f, -0.5773502588272095f, 0.5773502588272095f},
		{-0.5773502588272095f, -0.5773503184318542f, 0.5773502588272095f},
		{0.5773502588272095f, -0.5773503184318542f, -0.5773502588272095f},
		{-0.5773502588272095f, -0.5773502588272095f, -0.5773502588272095f},
		{0.30151134729385376f, -0.30151134729385376f, -0.9045339822769165f},
		{-0.30151131749153137f, -0.30151134729385376f, -0.9045339822769165f},
		{0.30151134729385376f, -0.30151134729385376f, 0.9045339822769165f},
		{-0.30151131749153137f, -0.30151134729385376f, 0.9045339822769165f},
		{-6.572352617695287e-08f, 0.8164965510368347f, -0.5773503184318542f},
		{-4.3815685302206475e-08f, 0.8164965510368347f, 0.5773503184318542f},
		{-0.7734588980674744f, -0.3203773498535156f, -0.5469180345535278f},
		{-0.7734590172767639f, -0.3203772008419037f, 0.5469180345535278f},
		{0.7734589576721191f, -0.3203772306442261f, -0.5469181537628174f},
		{0.7734589576721191f, -0.3203772306442261f, 0.5469181537628174f}
		},

	std::vector<unsigned int>{
		0, 1, 2, 2, 1, 3, 2, 3, 4, 4, 3, 5, 6, 7, 0, 0, 7, 1, 1,
		7, 3, 3, 7, 5, 6, 0, 4, 4, 0, 2, 4, 5, 8, 7, 6, 9, 5, 7, 10, 10, 7, 11,
		7, 9, 11, 9, 8, 11, 11, 8, 10, 8, 5, 10, 6, 4, 13, 13, 4, 12, 4, 8, 12,
		8, 9, 12, 12, 9, 13, 9, 6, 13
		},

	std::vector<unsigned int>{
		0, 1, 2, 3, 0, 2, 1, 3, 2, 4, 3, 5, 4, 6, 5, 7, 6, 0, 7,
		1, 8, 9, 5, 10, 7, 11, 10, 11, 9, 11, 8, 10, 4, 12, 6, 13, 12, 13, 8,
		12, 9, 13
		}
};


iconShape IconShapes::cone = {

	std::vector<std::array<float, 3>>{
		{0.46193987131118774f, -0.5f, -0.19134144484996796f},
		{0.35355356335639954f, -0.5f, -0.3535531759262085f},
		{0.19134195148944855f, -0.5f, -0.46193963289260864f},
		{2.5331974029541016e-07f, -0.5f, -0.4999999701976776f},
		{-0.19134148955345154f, -0.5f, -0.46193984150886536f},
		{-0.35355323553085327f, -0.5f, -0.35355353355407715f},
		{-0.4619396924972534f, -0.5f, -0.19134189188480377f},
		{-0.5f, -0.5f, -1.7881393432617188e-07f},
		{-0.46193981170654297f, -0.5f, 0.1913415640592575f},
		{-0.3535534739494324f, -0.5f, 0.35355329513549805f},
		{-0.1913418024778366f, -0.5f, 0.4619397222995758f},
		{-7.450580596923828e-08f, -0.5f, 0.5f},
		{0.19134165346622467f, -0.5f, 0.4619397819042206f},
		{0.3535533547401428f, -0.5f, 0.3535534143447876f},
		{0.4619397521018982f, -0.5f, 0.19134172797203064f},
		{0.5f, -0.5f, 0.0f},
		{0.0f, 0.5f, 0.0f},
		{0.0f, -0.5f, -8.940696716308594e-08f}
		},

	std::vector<std::array<float, 3>>{
		{0.8087804913520813f, -0.4833674430847168f, -0.33500751852989197f},
		{0.6190139651298523f, -0.48336732387542725f, -0.6190133690834045f},
		{0.33500826358795166f, -0.4833674430847168f, -0.8087802529335022f},
		{4.793238304046099e-07f, -0.48336753249168396f, -0.8754174709320068f},
		{-0.3350073993206024f, -0.4833674430847168f, -0.8087805509567261f},
		{-0.6190134286880493f, -0.4833674430847168f, -0.6190140247344971f},
		{-0.8087802529335022f, -0.4833674430847168f, -0.3350081145763397f},
		{-0.8754174709320068f, -0.4833674132823944f, -2.796055582621193e-07f},
		{-0.8087804913520813f, -0.4833674132823944f, 0.33500754833221436f},
		{-0.6190138459205627f, -0.4833674430847168f, 0.6190134286880493f},
		{-0.33500799536705017f, -0.4833674132823944f, 0.808780312538147f},
		{-1.3980277913105965e-07f, -0.4833674430847168f, 0.8754174709320068f},
		{0.3350076675415039f, -0.4833674132823944f, 0.808780312538147f},
		{0.6190136671066284f, -0.4833674430847168f, 0.619013786315918f},
		{0.8087803721427917f, -0.483367383480072f, 0.3350078761577606f},
		{0.8754175901412964f, -0.4833675026893616f, 1.2981686836610606e-07f},
		{6.053254253401974e-08f, 1.0f, -4.5248074798109883e-07f},
		{0.0f, -1.0f, 0.0f}
		},

	std::vector<unsigned int>{
		0, 15, 17, 0, 1, 16, 1, 2, 16, 2, 3, 16, 3, 4,
		16, 4, 5, 16, 5, 6, 16, 6, 7, 16, 7, 8, 16, 8, 9, 16, 9, 10, 16, 10, 11,
		16, 11, 12, 16, 12, 13, 16, 13, 14, 16, 14, 15, 16, 15, 0, 16, 13, 17,
		14, 10, 17, 11, 3, 17, 4, 12, 17, 13, 6, 17, 7, 8, 17, 9, 1, 17, 2, 9,
		17, 10, 2, 17, 3, 11, 17, 12, 4, 17, 5, 5, 17, 6, 14, 17, 15, 7, 17, 8,
		0, 17, 1
		},

	std::vector<unsigned int>{
		0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8,
		8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 0, 3, 16, 7,
		16, 11, 16, 15, 16, 15, 17, 17, 7, 11, 17, 17, 3
		}

};


iconShape IconShapes::house = {

	std::vector<std::array<float, 3>>{
		{-0.5f, -0.5f, 0.5f},
		{0.5f, -0.5f, 0.5f},
		{-0.5f, -5.960464477539063e-08f, 0.5f},
		{0.5f, -5.960464477539063e-08f, 0.5f},
		{-0.5f, -5.960464477539063e-08f, -0.5f},
		{0.5f, -5.960464477539063e-08f, -0.5f},
		{-0.5f, -0.5f, -0.5f},
		{0.5f, -0.5f, -0.5f},
		{1.4901161193847656e-08f, 0.5f, 0.5f},
		{1.4901161193847656e-08f, 0.5f, -0.5f}
		},

	std::vector<std::array<float, 3>>{
		{-0.5773502588272095f, -0.5773502588272095f, 0.5773502588272095f},
		{0.5773502588272095f, -0.5773501992225647f, 0.5773502588272095f},
		{-0.7172835469245911f, 0.29710856080055237f, 0.6302624940872192f},
		{0.7172835469245911f, 0.29710856080055237f, 0.6302624940872192f},
		{-0.7172835469245911f, 0.29710856080055237f, -0.6302624940872192f},
		{0.7172835469245911f, 0.29710856080055237f, -0.6302624940872192f},
		{-0.5773502588272095f, -0.5773501992225647f, -0.5773502588272095f},
		{0.5773502588272095f, -0.5773502588272095f, -0.5773502588272095f},
		{-2.1907844427460077e-08f, 0.8164966106414795f, 0.5773502588272095f},
		{2.1907844427460077e-08f, 0.8164966106414795f, -0.5773502588272095f}
		},

	std::vector<unsigned int>{
		0, 1, 2, 2, 1, 3, 4, 5, 6, 6, 5, 7, 6, 7, 0, 0, 7, 1, 1,
		7, 3, 3, 7, 5, 6, 0, 4, 4, 0, 2, 2, 3, 8, 3, 5, 8, 8, 5, 9, 5, 4, 9, 4,
		2, 9, 9, 2, 8
		},

	std::vector<unsigned int>{
		0, 1, 2, 3, 4, 5, 6, 7, 0, 2, 1, 3, 2, 4, 3, 5, 4, 6, 5,
		7, 6, 0, 7, 1, 2, 8, 3, 8, 5, 9, 8, 9, 4, 9
		}

};


std::array<iconShape, 10> IconShapes::icons = {
												IconShapes::null,
												IconShapes::cube,
												IconShapes::sphere,
												IconShapes::cylinder,
												IconShapes::pyramid,
												IconShapes::diamond,
												IconShapes::wedge,
												IconShapes::arrow,
												IconShapes::cone,
												IconShapes::house 
											  };


MString IconShapes::iconNames[10] = { 
									 MString("null"),
									 MString("cube"),
									 MString("sphere"),
									 MString("cylinder"),
								     MString("pyramid"),
									 MString("diamond"),
									 MString("wedge"),
									 MString("arrow"),
									 MString("cone"),
									 MString("house")
									};




/*

# OpenMaya 2.0

import maya.api.OpenMaya as om

def primPositions(dagPath):
    dagPath.extendToShape()

    node = dagPath.node()
    positions = []
    normals = []    
     
    iter = om.MItMeshVertex(node)

    while not iter.isDone():
        pos = iter.position()
        normal = iter.getNormal()
        positions.append((pos.x, pos.y, pos.z))
        normals.append((normal.x, normal.y, normal.z))
        iter.next()

    return positions, normals   


def primTriangles(dagPath):
    # Must be triangulated first
    iterFace = om.MItMeshPolygon(dagPath.node())
    points = []
    while not iterFace.isDone():
        pntArray = iterFace.getPoints()
        for i in xrange(len(pntArray)):
            points.append((pntArray[i].x, pntArray[i].y, pntArray[i].z))
        iterFace.next(1)
    return points

        
def trianglesToIndices(positions, triList):
    return [positions.index(pos) for pos in triList]  


def edgePtPositions(dagPath, components):
    dagPath.extendToShape()
    node = dagPath.node()

    iter = om.MItMeshEdge(node, components)

    positions = []
    while not iter.isDone():
        positions.append( (iter.point(0).x, iter.point(0).y, iter.point(0).z) )
        positions.append( (iter.point(1).x, iter.point(1).y, iter.point(1).z) )
        iter.next()

    return positions


def edgeIndices(positions, triPositions):
    return [positions.index(pos) for pos in triPositions]




'''
import maya.api.OpenMaya as om

#Faces
faceSel = om.MGlobal.getActiveSelectionList()    
dagNode = faceSel.getDagPath(0)

triPositions, normals = primPositions(dagNode)
triIndices = trianglesToIndices(triPositions, primTriangles(dagNode))

return

#Edges
edgeSel = om.MGlobal.getActiveSelectionList()    

dagNode, components = edgeSel.getComponent(0)

edgePositions = edgePtPositions(dagNode, components)
edgeIndices = edgeIndices(triPositions, edgePositions)
'''


*/