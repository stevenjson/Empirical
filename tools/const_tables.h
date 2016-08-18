//  This file is part of Empirical, https://github.com/mercere99/Empirical/
//  Copyright (C) Michigan State University, 2016.
//  Released under the MIT Software license; see doc/LICENSE
//
//
//  This file contains tables of constant values, plus functions to use them.


#ifndef EMP_CONST_TABLES_H
#define EMP_CONST_TABLES_H

namespace emp {
namespace constant {

  constexpr const double log2_chart_1_2[] =
  {
    0, 0.00140819, 0.00281502, 0.00422047, 0.00562455, 0.00702727, 0.00842862, 0.00982862,
    0.0112273, 0.0126245, 0.0140205, 0.0154151, 0.0168083, 0.0182002, 0.0195907, 0.0209799,
    0.0223678, 0.0237544, 0.0251396, 0.0265234, 0.027906, 0.0292872, 0.0306671, 0.0320457,
    0.033423, 0.034799, 0.0361736, 0.037547, 0.038919, 0.0402897, 0.0416592, 0.0430273,
    0.0443941, 0.0457597, 0.0471239, 0.0484869, 0.0498485, 0.0512089, 0.0525681, 0.0539259,
    0.0552824, 0.0566377, 0.0579917, 0.0593445, 0.0606959, 0.0620461, 0.0633951, 0.0647428,
    0.0660892, 0.0674344, 0.0687783, 0.0701209, 0.0714624, 0.0728025, 0.0741415, 0.0754791,
    0.0768156, 0.0781508, 0.0794848, 0.0808175, 0.082149, 0.0834793, 0.0848084, 0.0861362,
    0.0874628, 0.0887882, 0.0901124, 0.0914354, 0.0927571, 0.0940777, 0.095397, 0.0967152,
    0.0980321, 0.0993478, 0.100662, 0.101976, 0.103288, 0.104599, 0.105909, 0.107217,
    0.108524, 0.109831, 0.111136, 0.11244, 0.113742, 0.115044, 0.116344, 0.117643,
    0.118941, 0.120238, 0.121534, 0.122828, 0.124121, 0.125413, 0.126704, 0.127994,
    0.129283, 0.130571, 0.131857, 0.133142, 0.134426, 0.135709, 0.136991, 0.138272,
    0.139551, 0.14083, 0.142107, 0.143383, 0.144658, 0.145932, 0.147205, 0.148477,
    0.149747, 0.151017, 0.152285, 0.153552, 0.154818, 0.156083, 0.157347, 0.15861,
    0.159871, 0.161132, 0.162391, 0.16365, 0.164907, 0.166163, 0.167418, 0.168672,
    0.169925, 0.171177, 0.172428, 0.173677, 0.174926, 0.176173, 0.17742, 0.178665,
    0.179909, 0.181152, 0.182394, 0.183635, 0.184875, 0.186114, 0.187352, 0.188589,
    0.189825, 0.191059, 0.192293, 0.193525, 0.194757, 0.195987, 0.197217, 0.198445,
    0.199672, 0.200899, 0.202124, 0.203348, 0.204571, 0.205793, 0.207014, 0.208234,
    0.209453, 0.210671, 0.211888, 0.213104, 0.214319, 0.215533, 0.216746, 0.217958,
    0.219169, 0.220378, 0.221587, 0.222795, 0.224002, 0.225207, 0.226412, 0.227616,
    0.228819, 0.23002, 0.231221, 0.232421, 0.23362, 0.234817, 0.236014, 0.23721,
    0.238405, 0.239599, 0.240791, 0.241983, 0.243174, 0.244364, 0.245553, 0.246741,
    0.247928, 0.249113, 0.250298, 0.251482, 0.252665, 0.253847, 0.255029, 0.256209,
    0.257388, 0.258566, 0.259743, 0.26092, 0.262095, 0.263269, 0.264443, 0.265615,
    0.266787, 0.267957, 0.269127, 0.270295, 0.271463, 0.27263, 0.273796, 0.27496,
    0.276124, 0.277287, 0.278449, 0.279611, 0.280771, 0.28193, 0.283088, 0.284246,
    0.285402, 0.286558, 0.287712, 0.288866, 0.290019, 0.291171, 0.292322, 0.293472,
    0.294621, 0.295769, 0.296916, 0.298063, 0.299208, 0.300353, 0.301496, 0.302639,
    0.303781, 0.304922, 0.306062, 0.307201, 0.308339, 0.309476, 0.310613, 0.311748,
    0.312883, 0.314017, 0.31515, 0.316282, 0.317413, 0.318543, 0.319672, 0.320801,
    0.321928, 0.323055, 0.324181, 0.325305, 0.326429, 0.327553, 0.328675, 0.329796,
    0.330917, 0.332037, 0.333155, 0.334273, 0.33539, 0.336507, 0.337622, 0.338736,
    0.33985, 0.340963, 0.342075, 0.343186, 0.344296, 0.345405, 0.346514, 0.347621,
    0.348728, 0.349834, 0.350939, 0.352043, 0.353147, 0.354249, 0.355351, 0.356452,
    0.357552, 0.358651, 0.35975, 0.360847, 0.361944, 0.36304, 0.364135, 0.365229,
    0.366322, 0.367415, 0.368506, 0.369597, 0.370687, 0.371777, 0.372865, 0.373953,
    0.375039, 0.376125, 0.377211, 0.378295, 0.379378, 0.380461, 0.381543, 0.382624,
    0.383704, 0.384784, 0.385862, 0.38694, 0.388017, 0.389094, 0.390169, 0.391244,
    0.392317, 0.39339, 0.394463, 0.395534, 0.396605, 0.397675, 0.398744, 0.399812,
    0.400879, 0.401946, 0.403012, 0.404077, 0.405141, 0.406205, 0.407268, 0.40833,
    0.409391, 0.410451, 0.411511, 0.41257, 0.413628, 0.414685, 0.415742, 0.416798,
    0.417853, 0.418907, 0.41996, 0.421013, 0.422065, 0.423116, 0.424166, 0.425216,
    0.426265, 0.427313, 0.42836, 0.429407, 0.430453, 0.431498, 0.432542, 0.433585,
    0.434628, 0.43567, 0.436712, 0.437752, 0.438792, 0.439831, 0.440869, 0.441907,
    0.442943, 0.44398, 0.445015, 0.446049, 0.447083, 0.448116, 0.449149, 0.45018,
    0.451211, 0.452241, 0.453271, 0.454299, 0.455327, 0.456354, 0.457381, 0.458407,
    0.459432, 0.460456, 0.461479, 0.462502, 0.463524, 0.464546, 0.465566, 0.466586,
    0.467606, 0.468624, 0.469642, 0.470659, 0.471675, 0.472691, 0.473706, 0.47472,
    0.475733, 0.476746, 0.477758, 0.47877, 0.47978, 0.48079, 0.481799, 0.482808,
    0.483816, 0.484823, 0.485829, 0.486835, 0.48784, 0.488844, 0.489848, 0.490851,
    0.491853, 0.492855, 0.493855, 0.494856, 0.495855, 0.496854, 0.497852, 0.498849,
    0.499846, 0.500842, 0.501837, 0.502832, 0.503826, 0.504819, 0.505812, 0.506803,
    0.507795, 0.508785, 0.509775, 0.510764, 0.511753, 0.51274, 0.513728, 0.514714,
    0.5157, 0.516685, 0.517669, 0.518653, 0.519636, 0.520619, 0.5216, 0.522582,
    0.523562, 0.524542, 0.525521, 0.526499, 0.527477, 0.528454, 0.529431, 0.530406,
    0.531381, 0.532356, 0.53333, 0.534303, 0.535275, 0.536247, 0.537218, 0.538189,
    0.539159, 0.540128, 0.541097, 0.542065, 0.543032, 0.543998, 0.544964, 0.54593,
    0.546894, 0.547859, 0.548822, 0.549785, 0.550747, 0.551708, 0.552669, 0.553629,
    0.554589, 0.555548, 0.556506, 0.557464, 0.558421, 0.559377, 0.560333, 0.561288,
    0.562242, 0.563196, 0.564149, 0.565102, 0.566054, 0.567005, 0.567956, 0.568906,
    0.569856, 0.570804, 0.571753, 0.5727, 0.573647, 0.574594, 0.575539, 0.576484,
    0.577429, 0.578373, 0.579316, 0.580259, 0.581201, 0.582142, 0.583083, 0.584023,
    0.584963, 0.585901, 0.58684, 0.587778, 0.588715, 0.589651, 0.590587, 0.591522,
    0.592457, 0.593391, 0.594325, 0.595257, 0.59619, 0.597121, 0.598053, 0.598983,
    0.599913, 0.600842, 0.601771, 0.602699, 0.603626, 0.604553, 0.60548, 0.606405,
    0.60733, 0.608255, 0.609179, 0.610102, 0.611025, 0.611947, 0.612868, 0.613789,
    0.61471, 0.61563, 0.616549, 0.617467, 0.618386, 0.619303, 0.62022, 0.621136,
    0.622052, 0.622967, 0.623881, 0.624795, 0.625709, 0.626622, 0.627534, 0.628446,
    0.629357, 0.630267, 0.631177, 0.632086, 0.632995, 0.633903, 0.634811, 0.635718,
    0.636625, 0.637531, 0.638436, 0.639341, 0.640245, 0.641149, 0.642052, 0.642954,
    0.643856, 0.644758, 0.645658, 0.646559, 0.647458, 0.648358, 0.649256, 0.650154,
    0.651052, 0.651949, 0.652845, 0.653741, 0.654636, 0.655531, 0.656425, 0.657318,
    0.658211, 0.659104, 0.659996, 0.660887, 0.661778, 0.662668, 0.663558, 0.664447,
    0.665336, 0.666224, 0.667112, 0.667999, 0.668885, 0.669771, 0.670656, 0.671541,
    0.672425, 0.673309, 0.674192, 0.675075, 0.675957, 0.676839, 0.67772, 0.6786,
    0.67948, 0.68036, 0.681238, 0.682117, 0.682995, 0.683872, 0.684749, 0.685625,
    0.686501, 0.687376, 0.68825, 0.689124, 0.689998, 0.690871, 0.691744, 0.692616,
    0.693487, 0.694358, 0.695228, 0.696098, 0.696968, 0.697836, 0.698705, 0.699572,
    0.70044, 0.701306, 0.702173, 0.703038, 0.703904, 0.704768, 0.705632, 0.706496,
    0.707359, 0.708222, 0.709084, 0.709945, 0.710806, 0.711667, 0.712527, 0.713387,
    0.714246, 0.715104, 0.715962, 0.716819, 0.717676, 0.718533, 0.719389, 0.720244,
    0.721099, 0.721954, 0.722808, 0.723661, 0.724514, 0.725366, 0.726218, 0.72707,
    0.72792, 0.728771, 0.729621, 0.73047, 0.731319, 0.732167, 0.733015, 0.733863,
    0.73471, 0.735556, 0.736402, 0.737247, 0.738092, 0.738937, 0.739781, 0.740624,
    0.741467, 0.742309, 0.743151, 0.743993, 0.744834, 0.745674, 0.746514, 0.747354,
    0.748193, 0.749031, 0.749869, 0.750707, 0.751544, 0.752381, 0.753217, 0.754052,
    0.754888, 0.755722, 0.756556, 0.75739, 0.758223, 0.759056, 0.759888, 0.76072,
    0.761551, 0.762382, 0.763212, 0.764042, 0.764872, 0.7657, 0.766529, 0.767357,
    0.768184, 0.769011, 0.769838, 0.770664, 0.771489, 0.772315, 0.773139, 0.773963,
    0.774787, 0.77561, 0.776433, 0.777255, 0.778077, 0.778898, 0.779719, 0.78054,
    0.78136, 0.782179, 0.782998, 0.783817, 0.784635, 0.785452, 0.78627, 0.787086,
    0.787903, 0.788718, 0.789534, 0.790348, 0.791163, 0.791977, 0.79279, 0.793603,
    0.794416, 0.795228, 0.79604, 0.796851, 0.797662, 0.798472, 0.799282, 0.800091,
    0.8009, 0.801708, 0.802516, 0.803324, 0.804131, 0.804938, 0.805744, 0.80655,
    0.807355, 0.80816, 0.808964, 0.809768, 0.810572, 0.811375, 0.812177, 0.812979,
    0.813781, 0.814582, 0.815383, 0.816184, 0.816984, 0.817783, 0.818582, 0.819381,
    0.820179, 0.820977, 0.821774, 0.822571, 0.823367, 0.824163, 0.824959, 0.825754,
    0.826548, 0.827343, 0.828136, 0.82893, 0.829723, 0.830515, 0.831307, 0.832099,
    0.83289, 0.833681, 0.834471, 0.835261, 0.83605, 0.836839, 0.837628, 0.838416,
    0.839204, 0.839991, 0.840778, 0.841564, 0.84235, 0.843136, 0.843921, 0.844706,
    0.84549, 0.846274, 0.847057, 0.84784, 0.848623, 0.849405, 0.850187, 0.850968,
    0.851749, 0.85253, 0.85331, 0.854089, 0.854868, 0.855647, 0.856426, 0.857203,
    0.857981, 0.858758, 0.859535, 0.860311, 0.861087, 0.861862, 0.862637, 0.863412,
    0.864186, 0.86496, 0.865733, 0.866506, 0.867279, 0.868051, 0.868823, 0.869594,
    0.870365, 0.871135, 0.871905, 0.872675, 0.873444, 0.874213, 0.874981, 0.875749,
    0.876517, 0.877284, 0.878051, 0.878817, 0.879583, 0.880349, 0.881114, 0.881879,
    0.882643, 0.883407, 0.884171, 0.884934, 0.885696, 0.886459, 0.887221, 0.887982,
    0.888743, 0.889504, 0.890264, 0.891024, 0.891784, 0.892543, 0.893302, 0.89406,
    0.894818, 0.895575, 0.896332, 0.897089, 0.897845, 0.898601, 0.899357, 0.900112,
    0.900867, 0.901621, 0.902375, 0.903129, 0.903882, 0.904635, 0.905387, 0.906139,
    0.906891, 0.907642, 0.908393, 0.909143, 0.909893, 0.910643, 0.911392, 0.912141,
    0.912889, 0.913637, 0.914385, 0.915132, 0.915879, 0.916626, 0.917372, 0.918118,
    0.918863, 0.919608, 0.920353, 0.921097, 0.921841, 0.922584, 0.923327, 0.92407,
    0.924813, 0.925554, 0.926296, 0.927037, 0.927778, 0.928518, 0.929258, 0.929998,
    0.930737, 0.931476, 0.932215, 0.932953, 0.933691, 0.934428, 0.935165, 0.935902,
    0.936638, 0.937374, 0.938109, 0.938844, 0.939579, 0.940314, 0.941048, 0.941781,
    0.942515, 0.943247, 0.94398, 0.944712, 0.945444, 0.946175, 0.946906, 0.947637,
    0.948367, 0.949097, 0.949827, 0.950556, 0.951285, 0.952013, 0.952741, 0.953469,
    0.954196, 0.954923, 0.95565, 0.956376, 0.957102, 0.957828, 0.958553, 0.959278,
    0.960002, 0.960726, 0.96145, 0.962173, 0.962896, 0.963619, 0.964341, 0.965063,
    0.965784, 0.966505, 0.967226, 0.967947, 0.968667, 0.969387, 0.970106, 0.970825,
    0.971544, 0.972262, 0.97298, 0.973697, 0.974415, 0.975131, 0.975848, 0.976564,
    0.97728, 0.977995, 0.97871, 0.979425, 0.98014, 0.980854, 0.981567, 0.982281,
    0.982994, 0.983706, 0.984418, 0.98513, 0.985842, 0.986553, 0.987264, 0.987975,
    0.988685, 0.989394, 0.990104, 0.990813, 0.991522, 0.99223, 0.992938, 0.993646,
    0.994353, 0.99506, 0.995767, 0.996473, 0.997179, 0.997885, 0.99859, 0.999295,
    1.0
  };

  constexpr const double pow2_chart_bits[] =
  { 1.414214, 1.189207, 1.090508, 1.044274, 1.021897, 1.010889, 1.005430, 1.002711,
    1.001355, 1.000677, 1.000339, 1.000169, 1.000085, 1.000042, 1.000021, 1.000011 };

  constexpr const double pow2_chart_0_1[] =
  {
    1.0, 1.00068, 1.00135, 1.00203, 1.00271, 1.00339, 1.00407, 1.00475,
    1.00543, 1.00611, 1.00679, 1.00747, 1.00816, 1.00884, 1.00952, 1.01021,
    1.01089, 1.01157, 1.01226, 1.01294, 1.01363, 1.01432, 1.015, 1.01569,
    1.01638, 1.01707, 1.01776, 1.01844, 1.01913, 1.01982, 1.02051, 1.02121,
    1.0219, 1.02259, 1.02328, 1.02397, 1.02467, 1.02536, 1.02606, 1.02675,
    1.02745, 1.02814, 1.02884, 1.02953, 1.03023, 1.03093, 1.03163, 1.03233,
    1.03302, 1.03372, 1.03442, 1.03512, 1.03583, 1.03653, 1.03723, 1.03793,
    1.03863, 1.03934, 1.04004, 1.04075, 1.04145, 1.04216, 1.04286, 1.04357,
    1.04427, 1.04498, 1.04569, 1.0464, 1.04711, 1.04781, 1.04852, 1.04923,
    1.04994, 1.05066, 1.05137, 1.05208, 1.05279, 1.0535, 1.05422, 1.05493,
    1.05565, 1.05636, 1.05708, 1.05779, 1.05851, 1.05922, 1.05994, 1.06066,
    1.06138, 1.0621, 1.06282, 1.06353, 1.06425, 1.06498, 1.0657, 1.06642,
    1.06714, 1.06786, 1.06859, 1.06931, 1.07003, 1.07076, 1.07148, 1.07221,
    1.07293, 1.07366, 1.07439, 1.07512, 1.07584, 1.07657, 1.0773, 1.07803,
    1.07876, 1.07949, 1.08022, 1.08095, 1.08169, 1.08242, 1.08315, 1.08388,
    1.08462, 1.08535, 1.08609, 1.08682, 1.08756, 1.0883, 1.08903, 1.08977,
    1.09051, 1.09125, 1.09199, 1.09272, 1.09346, 1.0942, 1.09495, 1.09569,
    1.09643, 1.09717, 1.09791, 1.09866, 1.0994, 1.10015, 1.10089, 1.10164,
    1.10238, 1.10313, 1.10388, 1.10462, 1.10537, 1.10612, 1.10687, 1.10762,
    1.10837, 1.10912, 1.10987, 1.11062, 1.11137, 1.11213, 1.11288, 1.11363,
    1.11439, 1.11514, 1.1159, 1.11665, 1.11741, 1.11816, 1.11892, 1.11968,
    1.12044, 1.1212, 1.12196, 1.12272, 1.12348, 1.12424, 1.125, 1.12576,
    1.12652, 1.12728, 1.12805, 1.12881, 1.12958, 1.13034, 1.13111, 1.13187,
    1.13264, 1.13341, 1.13417, 1.13494, 1.13571, 1.13648, 1.13725, 1.13802,
    1.13879, 1.13956, 1.14033, 1.1411, 1.14188, 1.14265, 1.14342, 1.1442,
    1.14497, 1.14575, 1.14652, 1.1473, 1.14808, 1.14885, 1.14963, 1.15041,
    1.15119, 1.15197, 1.15275, 1.15353, 1.15431, 1.15509, 1.15587, 1.15666,
    1.15744, 1.15822, 1.15901, 1.15979, 1.16058, 1.16136, 1.16215, 1.16294,
    1.16372, 1.16451, 1.1653, 1.16609, 1.16688, 1.16767, 1.16846, 1.16925,
    1.17004, 1.17084, 1.17163, 1.17242, 1.17322, 1.17401, 1.17481, 1.1756,
    1.1764, 1.17719, 1.17799, 1.17879, 1.17959, 1.18039, 1.18118, 1.18198,
    1.18278, 1.18359, 1.18439, 1.18519, 1.18599, 1.18679, 1.1876, 1.1884,
    1.18921, 1.19001, 1.19082, 1.19162, 1.19243, 1.19324, 1.19405, 1.19486,
    1.19566, 1.19647, 1.19728, 1.19809, 1.19891, 1.19972, 1.20053, 1.20134,
    1.20216, 1.20297, 1.20379, 1.2046, 1.20542, 1.20623, 1.20705, 1.20787,
    1.20868, 1.2095, 1.21032, 1.21114, 1.21196, 1.21278, 1.2136, 1.21443,
    1.21525, 1.21607, 1.21689, 1.21772, 1.21854, 1.21937, 1.22019, 1.22102,
    1.22185, 1.22267, 1.2235, 1.22433, 1.22516, 1.22599, 1.22682, 1.22765,
    1.22848, 1.22931, 1.23014, 1.23098, 1.23181, 1.23265, 1.23348, 1.23432,
    1.23515, 1.23599, 1.23682, 1.23766, 1.2385, 1.23934, 1.24018, 1.24102,
    1.24186, 1.2427, 1.24354, 1.24438, 1.24522, 1.24607, 1.24691, 1.24776,
    1.2486, 1.24945, 1.25029, 1.25114, 1.25199, 1.25283, 1.25368, 1.25453,
    1.25538, 1.25623, 1.25708, 1.25793, 1.25878, 1.25964, 1.26049, 1.26134,
    1.2622, 1.26305, 1.26391, 1.26476, 1.26562, 1.26648, 1.26733, 1.26819,
    1.26905, 1.26991, 1.27077, 1.27163, 1.27249, 1.27335, 1.27422, 1.27508,
    1.27594, 1.27681, 1.27767, 1.27854, 1.2794, 1.28027, 1.28113, 1.282,
    1.28287, 1.28374, 1.28461, 1.28548, 1.28635, 1.28722, 1.28809, 1.28896,
    1.28984, 1.29071, 1.29158, 1.29246, 1.29333, 1.29421, 1.29509, 1.29596,
    1.29684, 1.29772, 1.2986, 1.29948, 1.30036, 1.30124, 1.30212, 1.303,
    1.30388, 1.30476, 1.30565, 1.30653, 1.30742, 1.3083, 1.30919, 1.31007,
    1.31096, 1.31185, 1.31274, 1.31363, 1.31452, 1.31541, 1.3163, 1.31719,
    1.31808, 1.31897, 1.31987, 1.32076, 1.32165, 1.32255, 1.32344, 1.32434,
    1.32524, 1.32613, 1.32703, 1.32793, 1.32883, 1.32973, 1.33063, 1.33153,
    1.33243, 1.33333, 1.33424, 1.33514, 1.33605, 1.33695, 1.33786, 1.33876,
    1.33967, 1.34057, 1.34148, 1.34239, 1.3433, 1.34421, 1.34512, 1.34603,
    1.34694, 1.34785, 1.34877, 1.34968, 1.35059, 1.35151, 1.35242, 1.35334,
    1.35426, 1.35517, 1.35609, 1.35701, 1.35793, 1.35885, 1.35977, 1.36069,
    1.36161, 1.36253, 1.36345, 1.36438, 1.3653, 1.36623, 1.36715, 1.36808,
    1.369, 1.36993, 1.37086, 1.37179, 1.37271, 1.37364, 1.37457, 1.3755,
    1.37644, 1.37737, 1.3783, 1.37923, 1.38017, 1.3811, 1.38204, 1.38297,
    1.38391, 1.38485, 1.38578, 1.38672, 1.38766, 1.3886, 1.38954, 1.39048,
    1.39142, 1.39237, 1.39331, 1.39425, 1.3952, 1.39614, 1.39709, 1.39803,
    1.39898, 1.39993, 1.40087, 1.40182, 1.40277, 1.40372, 1.40467, 1.40562,
    1.40658, 1.40753, 1.40848, 1.40944, 1.41039, 1.41134, 1.4123, 1.41326,
    1.41421, 1.41517, 1.41613, 1.41709, 1.41805, 1.41901, 1.41997, 1.42093,
    1.42189, 1.42286, 1.42382, 1.42478, 1.42575, 1.42671, 1.42768, 1.42865,
    1.42961, 1.43058, 1.43155, 1.43252, 1.43349, 1.43446, 1.43543, 1.4364,
    1.43738, 1.43835, 1.43932, 1.4403, 1.44127, 1.44225, 1.44323, 1.4442,
    1.44518, 1.44616, 1.44714, 1.44812, 1.4491, 1.45008, 1.45106, 1.45204,
    1.45303, 1.45401, 1.455, 1.45598, 1.45697, 1.45795, 1.45894, 1.45993,
    1.46092, 1.46191, 1.4629, 1.46389, 1.46488, 1.46587, 1.46686, 1.46786,
    1.46885, 1.46985, 1.47084, 1.47184, 1.47283, 1.47383, 1.47483, 1.47583,
    1.47683, 1.47783, 1.47883, 1.47983, 1.48083, 1.48183, 1.48284, 1.48384,
    1.48485, 1.48585, 1.48686, 1.48786, 1.48887, 1.48988, 1.49089, 1.4919,
    1.49291, 1.49392, 1.49493, 1.49594, 1.49696, 1.49797, 1.49898, 1.5,
    1.50101, 1.50203, 1.50305, 1.50407, 1.50508, 1.5061, 1.50712, 1.50814,
    1.50916, 1.51019, 1.51121, 1.51223, 1.51326, 1.51428, 1.51531, 1.51633,
    1.51736, 1.51839, 1.51941, 1.52044, 1.52147, 1.5225, 1.52353, 1.52457,
    1.5256, 1.52663, 1.52766, 1.5287, 1.52973, 1.53077, 1.53181, 1.53284,
    1.53388, 1.53492, 1.53596, 1.537, 1.53804, 1.53908, 1.54012, 1.54117,
    1.54221, 1.54326, 1.5443, 1.54535, 1.54639, 1.54744, 1.54849, 1.54954,
    1.55058, 1.55163, 1.55269, 1.55374, 1.55479, 1.55584, 1.5569, 1.55795,
    1.559, 1.56006, 1.56112, 1.56217, 1.56323, 1.56429, 1.56535, 1.56641,
    1.56747, 1.56853, 1.56959, 1.57066, 1.57172, 1.57278, 1.57385, 1.57491,
    1.57598, 1.57705, 1.57812, 1.57918, 1.58025, 1.58132, 1.58239, 1.58347,
    1.58454, 1.58561, 1.58668, 1.58776, 1.58883, 1.58991, 1.59099, 1.59206,
    1.59314, 1.59422, 1.5953, 1.59638, 1.59746, 1.59854, 1.59963, 1.60071,
    1.60179, 1.60288, 1.60396, 1.60505, 1.60614, 1.60722, 1.60831, 1.6094,
    1.61049, 1.61158, 1.61267, 1.61376, 1.61486, 1.61595, 1.61704, 1.61814,
    1.61924, 1.62033, 1.62143, 1.62253, 1.62363, 1.62472, 1.62582, 1.62693,
    1.62803, 1.62913, 1.63023, 1.63134, 1.63244, 1.63355, 1.63465, 1.63576,
    1.63687, 1.63798, 1.63908, 1.64019, 1.64131, 1.64242, 1.64353, 1.64464,
    1.64576, 1.64687, 1.64799, 1.6491, 1.65022, 1.65133, 1.65245, 1.65357,
    1.65469, 1.65581, 1.65693, 1.65806, 1.65918, 1.6603, 1.66143, 1.66255,
    1.66368, 1.6648, 1.66593, 1.66706, 1.66819, 1.66932, 1.67045, 1.67158,
    1.67271, 1.67384, 1.67498, 1.67611, 1.67725, 1.67838, 1.67952, 1.68065,
    1.68179, 1.68293, 1.68407, 1.68521, 1.68635, 1.68749, 1.68864, 1.68978,
    1.69092, 1.69207, 1.69322, 1.69436, 1.69551, 1.69666, 1.69781, 1.69896,
    1.70011, 1.70126, 1.70241, 1.70356, 1.70472, 1.70587, 1.70703, 1.70818,
    1.70934, 1.7105, 1.71165, 1.71281, 1.71397, 1.71513, 1.71629, 1.71746,
    1.71862, 1.71978, 1.72095, 1.72211, 1.72328, 1.72445, 1.72561, 1.72678,
    1.72795, 1.72912, 1.73029, 1.73146, 1.73264, 1.73381, 1.73498, 1.73616,
    1.73733, 1.73851, 1.73969, 1.74087, 1.74204, 1.74322, 1.7444, 1.74559,
    1.74677, 1.74795, 1.74913, 1.75032, 1.7515, 1.75269, 1.75388, 1.75506,
    1.75625, 1.75744, 1.75863, 1.75982, 1.76101, 1.76221, 1.7634, 1.76459,
    1.76579, 1.76698, 1.76818, 1.76938, 1.77058, 1.77177, 1.77297, 1.77418,
    1.77538, 1.77658, 1.77778, 1.77899, 1.78019, 1.7814, 1.7826, 1.78381,
    1.78502, 1.78623, 1.78743, 1.78865, 1.78986, 1.79107, 1.79228, 1.79349,
    1.79471, 1.79592, 1.79714, 1.79836, 1.79958, 1.80079, 1.80201, 1.80323,
    1.80445, 1.80568, 1.8069, 1.80812, 1.80935, 1.81057, 1.8118, 1.81302,
    1.81425, 1.81548, 1.81671, 1.81794, 1.81917, 1.8204, 1.82164, 1.82287,
    1.8241, 1.82534, 1.82657, 1.82781, 1.82905, 1.83029, 1.83153, 1.83277,
    1.83401, 1.83525, 1.83649, 1.83774, 1.83898, 1.84023, 1.84147, 1.84272,
    1.84397, 1.84522, 1.84646, 1.84771, 1.84897, 1.85022, 1.85147, 1.85272,
    1.85398, 1.85523, 1.85649, 1.85775, 1.85901, 1.86026, 1.86152, 1.86278,
    1.86405, 1.86531, 1.86657, 1.86784, 1.8691, 1.87037, 1.87163, 1.8729,
    1.87417, 1.87544, 1.87671, 1.87798, 1.87925, 1.88052, 1.88179, 1.88307,
    1.88434, 1.88562, 1.8869, 1.88817, 1.88945, 1.89073, 1.89201, 1.89329,
    1.89458, 1.89586, 1.89714, 1.89843, 1.89971, 1.901, 1.90229, 1.90357,
    1.90486, 1.90615, 1.90744, 1.90874, 1.91003, 1.91132, 1.91262, 1.91391,
    1.91521, 1.9165, 1.9178, 1.9191, 1.9204, 1.9217, 1.923, 1.9243,
    1.92561, 1.92691, 1.92821, 1.92952, 1.93083, 1.93213, 1.93344, 1.93475,
    1.93606, 1.93737, 1.93868, 1.94, 1.94131, 1.94263, 1.94394, 1.94526,
    1.94657, 1.94789, 1.94921, 1.95053, 1.95185, 1.95317, 1.9545, 1.95582,
    1.95714, 1.95847, 1.9598, 1.96112, 1.96245, 1.96378, 1.96511, 1.96644,
    1.96777, 1.9691, 1.97044, 1.97177, 1.97311, 1.97444, 1.97578, 1.97712,
    1.97846, 1.9798, 1.98114, 1.98248, 1.98382, 1.98516, 1.98651, 1.98785,
    1.9892, 1.99055, 1.99189, 1.99324, 1.99459, 1.99594, 1.99729, 1.99865,
    2.0
  };

  namespace internal {
    // The following function takes a table and a position [0.0, 1.0) and intepolates a value.
    template <typename T>
    constexpr double InterpolateTable(T && table, double pos, double tsize) {
      // auto p1 = (int)(pos*tsize);
      // auto w1 = 1.0-pos+((double)((int)(pos*tsize)))/tsize;
      // auto p2 = (int)(pos*tsize)+1;
      // auto w2 = pos-((double)((int)(pos*tsize)))/tsize;
      // std::cout << "[[ "
      //           << "pos=" << pos
      //           << " p1=" << p1
      //           << " v1=" << table[p1]
      //           << " w1=" << w1
      //           << " p2=" << p2
      //           << " v2=" << table[p2]
      //           << " w2=" << w2
      //           << " ]]";
      // return table[p1] * w1 + table[p2] * w2;
      return table[(int)(pos*tsize)] * (1.0-pos+((double)((int)(pos*tsize)))/tsize)
      + table[(int)(pos*tsize)+1] * (pos-((double)((int)(pos*tsize)))/tsize);
    }
  }
}
}

#endif
