// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbsg_cordic_sine_cosine_hyperbolic__Syms.h"


VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_init_sub__TOP__0(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+318,"clk_i", false,-1);
    tracep->declBus(c+319,"ang_i", false,-1, 20,0);
    tracep->declBit(c+320,"ready_i", false,-1);
    tracep->declBit(c+321,"val_i", false,-1);
    tracep->declBus(c+322,"sinh_o", false,-1, 31,0);
    tracep->declBus(c+323,"cosh_o", false,-1, 31,0);
    tracep->declBit(c+324,"ready_o", false,-1);
    tracep->declBit(c+325,"val_o", false,-1);
    tracep->pushNamePrefix("bsg_cordic_sine_cosine_hyperbolic ");
    tracep->declBus(c+327,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+328,"posi_prec_p", false,-1, 31,0);
    tracep->declBus(c+329,"extr_iter_p", false,-1, 31,0);
    tracep->declBus(c+330,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+331,"ang_width_p", false,-1, 31,0);
    tracep->declBit(c+318,"clk_i", false,-1);
    tracep->declBus(c+319,"ang_i", false,-1, 20,0);
    tracep->declBit(c+320,"ready_i", false,-1);
    tracep->declBit(c+321,"val_i", false,-1);
    tracep->declBus(c+322,"sinh_o", false,-1, 31,0);
    tracep->declBus(c+323,"cosh_o", false,-1, 31,0);
    tracep->declBit(c+324,"ready_o", false,-1);
    tracep->declBit(c+325,"val_o", false,-1);
    tracep->declArray(c+1,"x", false,-1, 671,0);
    tracep->declArray(c+22,"y", false,-1, 671,0);
    tracep->declArray(c+43,"ang", false,-1, 440,0);
    tracep->declBus(c+57,"val", false,-1, 20,0);
    tracep->declArray(c+58,"x_ans", false,-1, 639,0);
    tracep->declArray(c+78,"y_ans", false,-1, 639,0);
    tracep->declArray(c+98,"ang_ans", false,-1, 419,0);
    tracep->declBus(c+112,"val_ans", false,-1, 19,0);
    tracep->declBit(c+326,"stall_pipe", false,-1);
    tracep->declArray(c+332,"ang_lookup_lp", false,-1, 398,0);
    tracep->declBus(c+345,"x_start", false,-1, 31,0);
    tracep->declBus(c+346,"y_start", false,-1, 31,0);
    tracep->pushNamePrefix("stage_neg[0] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+347,"stage_p", false,-1, 31,0);
    tracep->declBus(c+327,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+330,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+331,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+113,"x_i", false,-1, 31,0);
    tracep->declBus(c+114,"y_i", false,-1, 31,0);
    tracep->declBus(c+115,"ang_i", false,-1, 20,0);
    tracep->declBus(c+348,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+116,"val_i", false,-1);
    tracep->declBus(c+117,"x_o", false,-1, 31,0);
    tracep->declBus(c+118,"y_o", false,-1, 31,0);
    tracep->declBus(c+119,"ang_o", false,-1, 20,0);
    tracep->declBit(c+116,"val_o", false,-1);
    tracep->declBus(c+120,"y_shift", false,-1, 31,0);
    tracep->declBus(c+121,"x_shift", false,-1, 31,0);
    tracep->declBit(c+122,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[1] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+329,"stage_p", false,-1, 31,0);
    tracep->declBus(c+327,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+330,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+331,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+123,"x_i", false,-1, 31,0);
    tracep->declBus(c+124,"y_i", false,-1, 31,0);
    tracep->declBus(c+125,"ang_i", false,-1, 20,0);
    tracep->declBus(c+349,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+126,"val_i", false,-1);
    tracep->declBus(c+127,"x_o", false,-1, 31,0);
    tracep->declBus(c+128,"y_o", false,-1, 31,0);
    tracep->declBus(c+129,"ang_o", false,-1, 20,0);
    tracep->declBit(c+126,"val_o", false,-1);
    tracep->declBus(c+130,"y_shift", false,-1, 31,0);
    tracep->declBus(c+131,"x_shift", false,-1, 31,0);
    tracep->declBit(c+132,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[2] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+350,"stage_p", false,-1, 31,0);
    tracep->declBus(c+327,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+330,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+331,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+133,"x_i", false,-1, 31,0);
    tracep->declBus(c+134,"y_i", false,-1, 31,0);
    tracep->declBus(c+135,"ang_i", false,-1, 20,0);
    tracep->declBus(c+351,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+136,"val_i", false,-1);
    tracep->declBus(c+137,"x_o", false,-1, 31,0);
    tracep->declBus(c+138,"y_o", false,-1, 31,0);
    tracep->declBus(c+139,"ang_o", false,-1, 20,0);
    tracep->declBit(c+136,"val_o", false,-1);
    tracep->declBus(c+140,"y_shift", false,-1, 31,0);
    tracep->declBus(c+141,"x_shift", false,-1, 31,0);
    tracep->declBit(c+142,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[3] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+352,"stage_p", false,-1, 31,0);
    tracep->declBus(c+327,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+330,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+331,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+143,"x_i", false,-1, 31,0);
    tracep->declBus(c+144,"y_i", false,-1, 31,0);
    tracep->declBus(c+145,"ang_i", false,-1, 20,0);
    tracep->declBus(c+353,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+146,"val_i", false,-1);
    tracep->declBus(c+147,"x_o", false,-1, 31,0);
    tracep->declBus(c+148,"y_o", false,-1, 31,0);
    tracep->declBus(c+149,"ang_o", false,-1, 20,0);
    tracep->declBit(c+146,"val_o", false,-1);
    tracep->declBus(c+150,"y_shift", false,-1, 31,0);
    tracep->declBus(c+151,"x_shift", false,-1, 31,0);
    tracep->declBit(c+152,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[4] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+354,"stage_p", false,-1, 31,0);
    tracep->declBus(c+327,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+330,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+331,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+153,"x_i", false,-1, 31,0);
    tracep->declBus(c+154,"y_i", false,-1, 31,0);
    tracep->declBus(c+155,"ang_i", false,-1, 20,0);
    tracep->declBus(c+355,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+156,"val_i", false,-1);
    tracep->declBus(c+157,"x_o", false,-1, 31,0);
    tracep->declBus(c+158,"y_o", false,-1, 31,0);
    tracep->declBus(c+159,"ang_o", false,-1, 20,0);
    tracep->declBit(c+156,"val_o", false,-1);
    tracep->declBus(c+160,"y_shift", false,-1, 31,0);
    tracep->declBus(c+161,"x_shift", false,-1, 31,0);
    tracep->declBit(c+162,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[5] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+356,"stage_p", false,-1, 31,0);
    tracep->declBus(c+327,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+330,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+331,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+163,"x_i", false,-1, 31,0);
    tracep->declBus(c+164,"y_i", false,-1, 31,0);
    tracep->declBus(c+165,"ang_i", false,-1, 20,0);
    tracep->declBus(c+357,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+166,"val_i", false,-1);
    tracep->declBus(c+167,"x_o", false,-1, 31,0);
    tracep->declBus(c+168,"y_o", false,-1, 31,0);
    tracep->declBus(c+169,"ang_o", false,-1, 20,0);
    tracep->declBit(c+166,"val_o", false,-1);
    tracep->declBus(c+170,"y_shift", false,-1, 31,0);
    tracep->declBus(c+171,"x_shift", false,-1, 31,0);
    tracep->declBit(c+172,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[6] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+327,"stage_p", false,-1, 31,0);
    tracep->declBus(c+327,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+330,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+331,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+173,"x_i", false,-1, 31,0);
    tracep->declBus(c+174,"y_i", false,-1, 31,0);
    tracep->declBus(c+175,"ang_i", false,-1, 20,0);
    tracep->declBus(c+358,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+176,"val_i", false,-1);
    tracep->declBus(c+177,"x_o", false,-1, 31,0);
    tracep->declBus(c+178,"y_o", false,-1, 31,0);
    tracep->declBus(c+179,"ang_o", false,-1, 20,0);
    tracep->declBit(c+176,"val_o", false,-1);
    tracep->declBus(c+180,"y_shift", false,-1, 31,0);
    tracep->declBus(c+181,"x_shift", false,-1, 31,0);
    tracep->declBit(c+182,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_pos[10] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+359,"stage_p", false,-1, 31,0);
    tracep->declBus(c+327,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+330,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+331,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+183,"x_i", false,-1, 31,0);
    tracep->declBus(c+184,"y_i", false,-1, 31,0);
    tracep->declBus(c+185,"ang_i", false,-1, 20,0);
    tracep->declBus(c+360,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+186,"val_i", false,-1);
    tracep->declBus(c+187,"x_o", false,-1, 31,0);
    tracep->declBus(c+188,"y_o", false,-1, 31,0);
    tracep->declBus(c+189,"ang_o", false,-1, 20,0);
    tracep->declBit(c+186,"val_o", false,-1);
    tracep->declBus(c+190,"y_shift", false,-1, 31,0);
    tracep->declBus(c+191,"x_shift", false,-1, 31,0);
    tracep->declBit(c+192,"rot_op", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csrep ");
    tracep->declBus(c+359,"stage_p", false,-1, 31,0);
    tracep->declBus(c+327,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+330,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+331,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+193,"x_i", false,-1, 31,0);
    tracep->declBus(c+194,"y_i", false,-1, 31,0);
    tracep->declBus(c+195,"ang_i", false,-1, 20,0);
    tracep->declBus(c+360,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+196,"val_i", false,-1);
    tracep->declBus(c+197,"x_o", false,-1, 31,0);
    tracep->declBus(c+198,"y_o", false,-1, 31,0);
    tracep->declBus(c+199,"ang_o", false,-1, 20,0);
    tracep->declBit(c+196,"val_o", false,-1);
    tracep->declBus(c+200,"y_shift", false,-1, 31,0);
    tracep->declBus(c+201,"x_shift", false,-1, 31,0);
    tracep->declBit(c+202,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[11] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+361,"stage_p", false,-1, 31,0);
    tracep->declBus(c+327,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+330,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+331,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+203,"x_i", false,-1, 31,0);
    tracep->declBus(c+204,"y_i", false,-1, 31,0);
    tracep->declBus(c+205,"ang_i", false,-1, 20,0);
    tracep->declBus(c+362,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+206,"val_i", false,-1);
    tracep->declBus(c+207,"x_o", false,-1, 31,0);
    tracep->declBus(c+208,"y_o", false,-1, 31,0);
    tracep->declBus(c+209,"ang_o", false,-1, 20,0);
    tracep->declBit(c+206,"val_o", false,-1);
    tracep->declBus(c+210,"y_shift", false,-1, 31,0);
    tracep->declBus(c+211,"x_shift", false,-1, 31,0);
    tracep->declBit(c+212,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[12] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+328,"stage_p", false,-1, 31,0);
    tracep->declBus(c+327,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+330,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+331,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+213,"x_i", false,-1, 31,0);
    tracep->declBus(c+214,"y_i", false,-1, 31,0);
    tracep->declBus(c+215,"ang_i", false,-1, 20,0);
    tracep->declBus(c+363,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+216,"val_i", false,-1);
    tracep->declBus(c+217,"x_o", false,-1, 31,0);
    tracep->declBus(c+218,"y_o", false,-1, 31,0);
    tracep->declBus(c+219,"ang_o", false,-1, 20,0);
    tracep->declBit(c+216,"val_o", false,-1);
    tracep->declBus(c+220,"y_shift", false,-1, 31,0);
    tracep->declBus(c+221,"x_shift", false,-1, 31,0);
    tracep->declBit(c+222,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[13] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+364,"stage_p", false,-1, 31,0);
    tracep->declBus(c+327,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+330,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+331,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+223,"x_i", false,-1, 31,0);
    tracep->declBus(c+224,"y_i", false,-1, 31,0);
    tracep->declBus(c+225,"ang_i", false,-1, 20,0);
    tracep->declBus(c+365,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+226,"val_i", false,-1);
    tracep->declBus(c+227,"x_o", false,-1, 31,0);
    tracep->declBus(c+228,"y_o", false,-1, 31,0);
    tracep->declBus(c+229,"ang_o", false,-1, 20,0);
    tracep->declBit(c+226,"val_o", false,-1);
    tracep->declBus(c+230,"y_shift", false,-1, 31,0);
    tracep->declBus(c+231,"x_shift", false,-1, 31,0);
    tracep->declBit(c+232,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[14] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+366,"stage_p", false,-1, 31,0);
    tracep->declBus(c+327,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+330,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+331,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+233,"x_i", false,-1, 31,0);
    tracep->declBus(c+234,"y_i", false,-1, 31,0);
    tracep->declBus(c+235,"ang_i", false,-1, 20,0);
    tracep->declBus(c+367,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+236,"val_i", false,-1);
    tracep->declBus(c+237,"x_o", false,-1, 31,0);
    tracep->declBus(c+238,"y_o", false,-1, 31,0);
    tracep->declBus(c+239,"ang_o", false,-1, 20,0);
    tracep->declBit(c+236,"val_o", false,-1);
    tracep->declBus(c+240,"y_shift", false,-1, 31,0);
    tracep->declBus(c+241,"x_shift", false,-1, 31,0);
    tracep->declBit(c+242,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[15] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+368,"stage_p", false,-1, 31,0);
    tracep->declBus(c+327,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+330,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+331,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+243,"x_i", false,-1, 31,0);
    tracep->declBus(c+244,"y_i", false,-1, 31,0);
    tracep->declBus(c+245,"ang_i", false,-1, 20,0);
    tracep->declBus(c+369,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+246,"val_i", false,-1);
    tracep->declBus(c+247,"x_o", false,-1, 31,0);
    tracep->declBus(c+248,"y_o", false,-1, 31,0);
    tracep->declBus(c+249,"ang_o", false,-1, 20,0);
    tracep->declBit(c+246,"val_o", false,-1);
    tracep->declBus(c+250,"y_shift", false,-1, 31,0);
    tracep->declBus(c+251,"x_shift", false,-1, 31,0);
    tracep->declBit(c+252,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[16] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+370,"stage_p", false,-1, 31,0);
    tracep->declBus(c+327,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+330,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+331,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+253,"x_i", false,-1, 31,0);
    tracep->declBus(c+254,"y_i", false,-1, 31,0);
    tracep->declBus(c+255,"ang_i", false,-1, 20,0);
    tracep->declBus(c+371,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+256,"val_i", false,-1);
    tracep->declBus(c+257,"x_o", false,-1, 31,0);
    tracep->declBus(c+258,"y_o", false,-1, 31,0);
    tracep->declBus(c+259,"ang_o", false,-1, 20,0);
    tracep->declBit(c+256,"val_o", false,-1);
    tracep->declBus(c+260,"y_shift", false,-1, 31,0);
    tracep->declBus(c+261,"x_shift", false,-1, 31,0);
    tracep->declBit(c+262,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[17] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+372,"stage_p", false,-1, 31,0);
    tracep->declBus(c+327,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+330,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+331,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+263,"x_i", false,-1, 31,0);
    tracep->declBus(c+264,"y_i", false,-1, 31,0);
    tracep->declBus(c+265,"ang_i", false,-1, 20,0);
    tracep->declBus(c+373,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+266,"val_i", false,-1);
    tracep->declBus(c+267,"x_o", false,-1, 31,0);
    tracep->declBus(c+268,"y_o", false,-1, 31,0);
    tracep->declBus(c+269,"ang_o", false,-1, 20,0);
    tracep->declBit(c+266,"val_o", false,-1);
    tracep->declBus(c+270,"y_shift", false,-1, 31,0);
    tracep->declBus(c+271,"x_shift", false,-1, 31,0);
    tracep->declBit(c+272,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[18] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+374,"stage_p", false,-1, 31,0);
    tracep->declBus(c+327,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+330,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+331,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+263,"x_i", false,-1, 31,0);
    tracep->declBus(c+264,"y_i", false,-1, 31,0);
    tracep->declBus(c+265,"ang_i", false,-1, 20,0);
    tracep->declBus(c+375,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+266,"val_i", false,-1);
    tracep->declBus(c+273,"x_o", false,-1, 31,0);
    tracep->declBus(c+274,"y_o", false,-1, 31,0);
    tracep->declBus(c+275,"ang_o", false,-1, 20,0);
    tracep->declBit(c+266,"val_o", false,-1);
    tracep->declBus(c+276,"y_shift", false,-1, 31,0);
    tracep->declBus(c+277,"x_shift", false,-1, 31,0);
    tracep->declBit(c+272,"rot_op", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csrep ");
    tracep->declBus(c+374,"stage_p", false,-1, 31,0);
    tracep->declBus(c+327,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+330,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+331,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+278,"x_i", false,-1, 31,0);
    tracep->declBus(c+279,"y_i", false,-1, 31,0);
    tracep->declBus(c+280,"ang_i", false,-1, 20,0);
    tracep->declBus(c+375,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+281,"val_i", false,-1);
    tracep->declBus(c+282,"x_o", false,-1, 31,0);
    tracep->declBus(c+283,"y_o", false,-1, 31,0);
    tracep->declBus(c+284,"ang_o", false,-1, 20,0);
    tracep->declBit(c+281,"val_o", false,-1);
    tracep->declBus(c+285,"y_shift", false,-1, 31,0);
    tracep->declBus(c+286,"x_shift", false,-1, 31,0);
    tracep->declBit(c+287,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[7] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+376,"stage_p", false,-1, 31,0);
    tracep->declBus(c+327,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+330,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+331,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+288,"x_i", false,-1, 31,0);
    tracep->declBus(c+289,"y_i", false,-1, 31,0);
    tracep->declBus(c+290,"ang_i", false,-1, 20,0);
    tracep->declBus(c+377,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+291,"val_i", false,-1);
    tracep->declBus(c+292,"x_o", false,-1, 31,0);
    tracep->declBus(c+293,"y_o", false,-1, 31,0);
    tracep->declBus(c+294,"ang_o", false,-1, 20,0);
    tracep->declBit(c+291,"val_o", false,-1);
    tracep->declBus(c+295,"y_shift", false,-1, 31,0);
    tracep->declBus(c+296,"x_shift", false,-1, 31,0);
    tracep->declBit(c+297,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[8] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+378,"stage_p", false,-1, 31,0);
    tracep->declBus(c+327,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+330,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+331,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+298,"x_i", false,-1, 31,0);
    tracep->declBus(c+299,"y_i", false,-1, 31,0);
    tracep->declBus(c+300,"ang_i", false,-1, 20,0);
    tracep->declBus(c+379,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+301,"val_i", false,-1);
    tracep->declBus(c+302,"x_o", false,-1, 31,0);
    tracep->declBus(c+303,"y_o", false,-1, 31,0);
    tracep->declBus(c+304,"ang_o", false,-1, 20,0);
    tracep->declBit(c+301,"val_o", false,-1);
    tracep->declBus(c+305,"y_shift", false,-1, 31,0);
    tracep->declBus(c+306,"x_shift", false,-1, 31,0);
    tracep->declBit(c+307,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[9] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+380,"stage_p", false,-1, 31,0);
    tracep->declBus(c+327,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+330,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+331,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+308,"x_i", false,-1, 31,0);
    tracep->declBus(c+309,"y_i", false,-1, 31,0);
    tracep->declBus(c+310,"ang_i", false,-1, 20,0);
    tracep->declBus(c+381,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+311,"val_i", false,-1);
    tracep->declBus(c+312,"x_o", false,-1, 31,0);
    tracep->declBus(c+313,"y_o", false,-1, 31,0);
    tracep->declBus(c+314,"ang_o", false,-1, 20,0);
    tracep->declBit(c+311,"val_o", false,-1);
    tracep->declBus(c+315,"y_shift", false,-1, 31,0);
    tracep->declBus(c+316,"x_shift", false,-1, 31,0);
    tracep->declBit(c+317,"rot_op", false,-1);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_init_top(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_init_top\n"); );
    // Body
    Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_register(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_full_sub_0(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_full_top_0\n"); );
    // Init
    Vbsg_cordic_sine_cosine_hyperbolic___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbsg_cordic_sine_cosine_hyperbolic___024root*>(voidSelf);
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

extern const VlWide<13>/*415:0*/ Vbsg_cordic_sine_cosine_hyperbolic__ConstPool__CONST_h154117da_0;

VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_full_sub_0(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullWData(oldp+1,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x),672);
    tracep->fullWData(oldp+22,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y),672);
    tracep->fullWData(oldp+43,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang),441);
    tracep->fullIData(oldp+57,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val),21);
    tracep->fullWData(oldp+58,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans),640);
    tracep->fullWData(oldp+78,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans),640);
    tracep->fullWData(oldp+98,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans),420);
    tracep->fullIData(oldp+112,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans),20);
    tracep->fullIData(oldp+113,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U]),32);
    tracep->fullIData(oldp+114,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U]),32);
    tracep->fullIData(oldp+115,((0x1fffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])),21);
    tracep->fullBit(oldp+116,((1U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val)));
    tracep->fullIData(oldp+117,((((0x100000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
                                   ? 1U : 0U) ? ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U] 
                                                  - 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U]) 
                                                 + 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U], 8U))
                                  : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U] 
                                      + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U]) 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U], 8U)))),32);
    tracep->fullIData(oldp+118,((((0x100000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
                                   ? 1U : 0U) ? ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U] 
                                                  - 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U]) 
                                                 + 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U], 8U))
                                  : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U] 
                                      + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U]) 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U], 8U)))),32);
    tracep->fullIData(oldp+119,((0x1fffffU & (((0x100000U 
                                                & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
                                                ? 1U
                                                : 0U)
                                               ? ((IData)(0x31e41U) 
                                                  + 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
                                               : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                                                  - (IData)(0x31e41U))))),21);
    tracep->fullIData(oldp+120,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U], 8U)),32);
    tracep->fullIData(oldp+121,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U], 8U)),32);
    tracep->fullBit(oldp+122,(((0x100000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
                                ? 1U : 0U)));
    tracep->fullIData(oldp+123,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U]),32);
    tracep->fullIData(oldp+124,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U]),32);
    tracep->fullIData(oldp+125,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                               << 0xbU) 
                                              | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                                                 >> 0x15U)))),21);
    tracep->fullBit(oldp+126,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                     >> 1U))));
    tracep->fullIData(oldp+127,((((0x200U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                                   ? 1U : 0U) ? ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U] 
                                                  - 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U]) 
                                                 + 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U], 7U))
                                  : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U] 
                                      + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U]) 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U], 7U)))),32);
    tracep->fullIData(oldp+128,((((0x200U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                                   ? 1U : 0U) ? ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U] 
                                                  - 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U]) 
                                                 + 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U], 7U))
                                  : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U] 
                                      + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U]) 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U], 7U)))),32);
    tracep->fullIData(oldp+129,((0x1fffffU & (((0x200U 
                                                & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                                                ? 1U
                                                : 0U)
                                               ? ((IData)(0x2c548U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                    << 0xbU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                                                      >> 0x15U)))
                                               : ((
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                    << 0xbU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                                                      >> 0x15U)) 
                                                  - (IData)(0x2c548U))))),21);
    tracep->fullIData(oldp+130,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U], 7U)),32);
    tracep->fullIData(oldp+131,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U], 7U)),32);
    tracep->fullBit(oldp+132,(((0x200U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                                ? 1U : 0U)));
    tracep->fullIData(oldp+133,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U]),32);
    tracep->fullIData(oldp+134,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U]),32);
    tracep->fullIData(oldp+135,((0x1fffffU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                              >> 0xaU))),21);
    tracep->fullBit(oldp+136,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                     >> 2U))));
    tracep->fullIData(oldp+137,((((0x40000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                                   ? 1U : 0U) ? ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U] 
                                                  - 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U]) 
                                                 + 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U], 6U))
                                  : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U] 
                                      + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U]) 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U], 6U)))),32);
    tracep->fullIData(oldp+138,((((0x40000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                                   ? 1U : 0U) ? ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U] 
                                                  - 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U]) 
                                                 + 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U], 6U))
                                  : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U] 
                                      + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U]) 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U], 6U)))),32);
    tracep->fullIData(oldp+139,((0x1fffffU & (((0x40000000U 
                                                & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                                                ? 1U
                                                : 0U)
                                               ? ((IData)(0x26c0eU) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                    << 0x16U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                      >> 0xaU)))
                                               : ((
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                    << 0x16U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                      >> 0xaU)) 
                                                  - (IData)(0x26c0eU))))),21);
    tracep->fullIData(oldp+140,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U], 6U)),32);
    tracep->fullIData(oldp+141,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U], 6U)),32);
    tracep->fullBit(oldp+142,(((0x40000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                                ? 1U : 0U)));
    tracep->fullIData(oldp+143,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U]),32);
    tracep->fullIData(oldp+144,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U]),32);
    tracep->fullIData(oldp+145,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                               << 1U) 
                                              | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                 >> 0x1fU)))),21);
    tracep->fullBit(oldp+146,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                     >> 3U))));
    tracep->fullIData(oldp+147,((((0x80000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U])
                                   ? 1U : 0U) ? ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U] 
                                                  - 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U]) 
                                                 + 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U], 5U))
                                  : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U] 
                                      + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U]) 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U], 5U)))),32);
    tracep->fullIData(oldp+148,((((0x80000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U])
                                   ? 1U : 0U) ? ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U] 
                                                  - 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U]) 
                                                 + 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U], 5U))
                                  : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U] 
                                      + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U]) 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U], 5U)))),32);
    tracep->fullIData(oldp+149,((0x1fffffU & (((0x80000U 
                                                & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U])
                                                ? 1U
                                                : 0U)
                                               ? ((IData)(0x21252U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                                    << 1U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                      >> 0x1fU)))
                                               : ((
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                                    << 1U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                      >> 0x1fU)) 
                                                  - (IData)(0x21252U))))),21);
    tracep->fullIData(oldp+150,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U], 5U)),32);
    tracep->fullIData(oldp+151,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U], 5U)),32);
    tracep->fullBit(oldp+152,(((0x80000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U])
                                ? 1U : 0U)));
    tracep->fullIData(oldp+153,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U]),32);
    tracep->fullIData(oldp+154,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U]),32);
    tracep->fullIData(oldp+155,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                               << 0xcU) 
                                              | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                                 >> 0x14U)))),21);
    tracep->fullBit(oldp+156,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                     >> 4U))));
    tracep->fullIData(oldp+157,((((0x100U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                                   ? 1U : 0U) ? ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U] 
                                                  - 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U]) 
                                                 + 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U], 4U))
                                  : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U] 
                                      + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U]) 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U], 4U)))),32);
    tracep->fullIData(oldp+158,((((0x100U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                                   ? 1U : 0U) ? ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U] 
                                                  - 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U]) 
                                                 + 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U], 4U))
                                  : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U] 
                                      + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U]) 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U], 4U)))),32);
    tracep->fullIData(oldp+159,((0x1fffffU & (((0x100U 
                                                & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                                                ? 1U
                                                : 0U)
                                               ? ((IData)(0x1b78cU) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                    << 0xcU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                                      >> 0x14U)))
                                               : ((
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                    << 0xcU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                                      >> 0x14U)) 
                                                  - (IData)(0x1b78cU))))),21);
    tracep->fullIData(oldp+160,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U], 4U)),32);
    tracep->fullIData(oldp+161,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U], 4U)),32);
    tracep->fullBit(oldp+162,(((0x100U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                                ? 1U : 0U)));
    tracep->fullIData(oldp+163,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U]),32);
    tracep->fullIData(oldp+164,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U]),32);
    tracep->fullIData(oldp+165,((0x1fffffU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                              >> 9U))),21);
    tracep->fullBit(oldp+166,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                     >> 5U))));
    tracep->fullIData(oldp+167,((((0x20000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                                   ? 1U : 0U) ? ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U] 
                                                  - 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U]) 
                                                 + 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U], 3U))
                                  : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U] 
                                      + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U]) 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U], 3U)))),32);
    tracep->fullIData(oldp+168,((((0x20000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                                   ? 1U : 0U) ? ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U] 
                                                  - 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U]) 
                                                 + 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U], 3U))
                                  : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U] 
                                      + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U]) 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U], 3U)))),32);
    tracep->fullIData(oldp+169,((0x1fffffU & (((0x20000000U 
                                                & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                                                ? 1U
                                                : 0U)
                                               ? ((IData)(0x15aa1U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                    << 0x17U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                      >> 9U)))
                                               : ((
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                    << 0x17U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                      >> 9U)) 
                                                  - (IData)(0x15aa1U))))),21);
    tracep->fullIData(oldp+170,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U], 3U)),32);
    tracep->fullIData(oldp+171,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U], 3U)),32);
    tracep->fullBit(oldp+172,(((0x20000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                                ? 1U : 0U)));
    tracep->fullIData(oldp+173,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U]),32);
    tracep->fullIData(oldp+174,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U]),32);
    tracep->fullIData(oldp+175,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                               << 2U) 
                                              | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                 >> 0x1eU)))),21);
    tracep->fullBit(oldp+176,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                     >> 6U))));
    tracep->fullIData(oldp+177,((((0x40000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U])
                                   ? 1U : 0U) ? ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U] 
                                                  - 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U]) 
                                                 + 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U], 2U))
                                  : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U] 
                                      + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U]) 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U], 2U)))),32);
    tracep->fullIData(oldp+178,((((0x40000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U])
                                   ? 1U : 0U) ? ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U] 
                                                  - 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U]) 
                                                 + 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U], 2U))
                                  : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U] 
                                      + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U]) 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U], 2U)))),32);
    tracep->fullIData(oldp+179,((0x1fffffU & (((0x40000U 
                                                & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U])
                                                ? 1U
                                                : 0U)
                                               ? ((IData)(0xf913U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                                    << 2U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                      >> 0x1eU)))
                                               : ((
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                                    << 2U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                      >> 0x1eU)) 
                                                  - (IData)(0xf913U))))),21);
    tracep->fullIData(oldp+180,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U], 2U)),32);
    tracep->fullIData(oldp+181,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U], 2U)),32);
    tracep->fullBit(oldp+182,(((0x40000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U])
                                ? 1U : 0U)));
    tracep->fullIData(oldp+183,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xaU]),32);
    tracep->fullIData(oldp+184,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xaU]),32);
    tracep->fullIData(oldp+185,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                               << 0xeU) 
                                              | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                                 >> 0x12U)))),21);
    tracep->fullBit(oldp+186,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                     >> 0xaU))));
    tracep->fullIData(oldp+187,((((0x40U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xaU] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xaU], 4U))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xaU] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xaU], 4U)))),32);
    tracep->fullIData(oldp+188,((((0x40U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xaU] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xaU], 4U))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xaU] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xaU], 4U)))),32);
    tracep->fullIData(oldp+189,((0x1fffffU & (((0x40U 
                                                & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                                                ? 1U
                                                : 0U)
                                               ? ((IData)(0x1005U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                    << 0xeU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                                      >> 0x12U)))
                                               : ((
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                    << 0xeU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                                      >> 0x12U)) 
                                                  - (IData)(0x1005U))))),21);
    tracep->fullIData(oldp+190,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xaU], 4U)),32);
    tracep->fullIData(oldp+191,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xaU], 4U)),32);
    tracep->fullBit(oldp+192,(((0x40U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                                ? 1U : 0U)));
    tracep->fullIData(oldp+193,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xbU]),32);
    tracep->fullIData(oldp+194,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xbU]),32);
    tracep->fullIData(oldp+195,((0x1fffffU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                              >> 7U))),21);
    tracep->fullBit(oldp+196,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                     >> 0xbU))));
    tracep->fullIData(oldp+197,((((0x8000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xbU] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xbU], 4U))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xbU] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xbU], 4U)))),32);
    tracep->fullIData(oldp+198,((((0x8000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xbU] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xbU], 4U))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xbU] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xbU], 4U)))),32);
    tracep->fullIData(oldp+199,((0x1fffffU & (((0x8000000U 
                                                & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                                                ? 1U
                                                : 0U)
                                               ? ((IData)(0x1005U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                    << 0x19U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                      >> 7U)))
                                               : ((
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                    << 0x19U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                      >> 7U)) 
                                                  - (IData)(0x1005U))))),21);
    tracep->fullIData(oldp+200,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xbU], 4U)),32);
    tracep->fullIData(oldp+201,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xbU], 4U)),32);
    tracep->fullBit(oldp+202,(((0x8000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                                ? 1U : 0U)));
    tracep->fullIData(oldp+203,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xcU]),32);
    tracep->fullIData(oldp+204,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xcU]),32);
    tracep->fullIData(oldp+205,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                               << 4U) 
                                              | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                 >> 0x1cU)))),21);
    tracep->fullBit(oldp+206,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                     >> 0xcU))));
    tracep->fullIData(oldp+207,((((0x10000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xcU] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xcU], 5U))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xcU] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xcU], 5U)))),32);
    tracep->fullIData(oldp+208,((((0x10000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xcU] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xcU], 5U))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xcU] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xcU], 5U)))),32);
    tracep->fullIData(oldp+209,((0x1fffffU & (((0x10000U 
                                                & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U])
                                                ? 1U
                                                : 0U)
                                               ? ((IData)(0x800U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                                    << 4U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                      >> 0x1cU)))
                                               : ((
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                                    << 4U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                      >> 0x1cU)) 
                                                  - (IData)(0x800U))))),21);
    tracep->fullIData(oldp+210,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xcU], 5U)),32);
    tracep->fullIData(oldp+211,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xcU], 5U)),32);
    tracep->fullBit(oldp+212,(((0x10000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U])
                                ? 1U : 0U)));
    tracep->fullIData(oldp+213,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xdU]),32);
    tracep->fullIData(oldp+214,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xdU]),32);
    tracep->fullIData(oldp+215,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                               << 0xfU) 
                                              | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                                 >> 0x11U)))),21);
    tracep->fullBit(oldp+216,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                     >> 0xdU))));
    tracep->fullIData(oldp+217,((((0x20U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xdU] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xdU], 6U))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xdU] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xdU], 6U)))),32);
    tracep->fullIData(oldp+218,((((0x20U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xdU] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xdU], 6U))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xdU] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xdU], 6U)))),32);
    tracep->fullIData(oldp+219,((0x1fffffU & (((0x20U 
                                                & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])
                                                ? 1U
                                                : 0U)
                                               ? ((IData)(0x400U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                    << 0xfU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                                      >> 0x11U)))
                                               : ((
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                    << 0xfU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                                      >> 0x11U)) 
                                                  - (IData)(0x400U))))),21);
    tracep->fullIData(oldp+220,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xdU], 6U)),32);
    tracep->fullIData(oldp+221,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xdU], 6U)),32);
    tracep->fullBit(oldp+222,(((0x20U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])
                                ? 1U : 0U)));
    tracep->fullIData(oldp+223,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xeU]),32);
    tracep->fullIData(oldp+224,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xeU]),32);
    tracep->fullIData(oldp+225,((0x1fffffU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                              >> 6U))),21);
    tracep->fullBit(oldp+226,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                     >> 0xeU))));
    tracep->fullIData(oldp+227,((((0x4000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xeU] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xeU], 7U))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xeU] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xeU], 7U)))),32);
    tracep->fullIData(oldp+228,((((0x4000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xeU] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xeU], 7U))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xeU] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xeU], 7U)))),32);
    tracep->fullIData(oldp+229,((0x1fffffU & (((0x4000000U 
                                                & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])
                                                ? 1U
                                                : 0U)
                                               ? ((IData)(0x200U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                    << 0x1aU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                      >> 6U)))
                                               : ((
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                    << 0x1aU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                      >> 6U)) 
                                                  - (IData)(0x200U))))),21);
    tracep->fullIData(oldp+230,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xeU], 7U)),32);
    tracep->fullIData(oldp+231,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xeU], 7U)),32);
    tracep->fullBit(oldp+232,(((0x4000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])
                                ? 1U : 0U)));
    tracep->fullIData(oldp+233,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xfU]),32);
    tracep->fullIData(oldp+234,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xfU]),32);
    tracep->fullIData(oldp+235,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                               << 5U) 
                                              | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                 >> 0x1bU)))),21);
    tracep->fullBit(oldp+236,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                     >> 0xfU))));
    tracep->fullIData(oldp+237,((((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xfU] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xfU], 8U))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xfU] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xfU], 8U)))),32);
    tracep->fullIData(oldp+238,((((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xfU] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xfU], 8U))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xfU] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xfU], 8U)))),32);
    tracep->fullIData(oldp+239,((0x1fffffU & (((0x8000U 
                                                & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU])
                                                ? 1U
                                                : 0U)
                                               ? ((IData)(0x100U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                                    << 5U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                      >> 0x1bU)))
                                               : ((
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                                    << 5U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                      >> 0x1bU)) 
                                                  - (IData)(0x100U))))),21);
    tracep->fullIData(oldp+240,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xfU], 8U)),32);
    tracep->fullIData(oldp+241,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xfU], 8U)),32);
    tracep->fullBit(oldp+242,(((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU])
                                ? 1U : 0U)));
    tracep->fullIData(oldp+243,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x10U]),32);
    tracep->fullIData(oldp+244,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x10U]),32);
    tracep->fullIData(oldp+245,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                               << 0x10U) 
                                              | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                                 >> 0x10U)))),21);
    tracep->fullBit(oldp+246,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                     >> 0x10U))));
    tracep->fullIData(oldp+247,((((0x10U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x10U] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x10U], 9U))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x10U] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x10U], 9U)))),32);
    tracep->fullIData(oldp+248,((((0x10U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x10U] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x10U], 9U))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x10U] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x10U], 9U)))),32);
    tracep->fullIData(oldp+249,((0x1fffffU & (((0x10U 
                                                & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                                                ? 1U
                                                : 0U)
                                               ? ((IData)(0x80U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                    << 0x10U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                                      >> 0x10U)))
                                               : ((
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                    << 0x10U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                                      >> 0x10U)) 
                                                  - (IData)(0x80U))))),21);
    tracep->fullIData(oldp+250,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x10U], 9U)),32);
    tracep->fullIData(oldp+251,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x10U], 9U)),32);
    tracep->fullBit(oldp+252,(((0x10U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                                ? 1U : 0U)));
    tracep->fullIData(oldp+253,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U]),32);
    tracep->fullIData(oldp+254,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U]),32);
    tracep->fullIData(oldp+255,((0x1fffffU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                              >> 5U))),21);
    tracep->fullBit(oldp+256,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                     >> 0x11U))));
    tracep->fullIData(oldp+257,((((0x2000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U], 0xaU))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U], 0xaU)))),32);
    tracep->fullIData(oldp+258,((((0x2000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U], 0xaU))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U], 0xaU)))),32);
    tracep->fullIData(oldp+259,((0x1fffffU & (((0x2000000U 
                                                & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                                                ? 1U
                                                : 0U)
                                               ? ((IData)(0x40U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                      >> 5U)))
                                               : ((
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                      >> 5U)) 
                                                  - (IData)(0x40U))))),21);
    tracep->fullIData(oldp+260,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U], 0xaU)),32);
    tracep->fullIData(oldp+261,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U], 0xaU)),32);
    tracep->fullBit(oldp+262,(((0x2000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                                ? 1U : 0U)));
    tracep->fullIData(oldp+263,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U]),32);
    tracep->fullIData(oldp+264,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U]),32);
    tracep->fullIData(oldp+265,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                               << 6U) 
                                              | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                 >> 0x1aU)))),21);
    tracep->fullBit(oldp+266,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                     >> 0x12U))));
    tracep->fullIData(oldp+267,((((0x4000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xbU))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xbU)))),32);
    tracep->fullIData(oldp+268,((((0x4000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xbU))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xbU)))),32);
    tracep->fullIData(oldp+269,((0x1fffffU & (((0x4000U 
                                                & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                                ? 1U
                                                : 0U)
                                               ? ((IData)(0x20U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                    << 6U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                      >> 0x1aU)))
                                               : ((
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                    << 6U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                      >> 0x1aU)) 
                                                  - (IData)(0x20U))))),21);
    tracep->fullIData(oldp+270,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xbU)),32);
    tracep->fullIData(oldp+271,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xbU)),32);
    tracep->fullBit(oldp+272,(((0x4000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                ? 1U : 0U)));
    tracep->fullIData(oldp+273,((((0x4000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xcU))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xcU)))),32);
    tracep->fullIData(oldp+274,((((0x4000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xcU))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xcU)))),32);
    tracep->fullIData(oldp+275,((0x1fffffU & (((0x4000U 
                                                & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                                ? 1U
                                                : 0U)
                                               ? ((IData)(0x10U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                    << 6U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                      >> 0x1aU)))
                                               : ((
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                    << 6U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                      >> 0x1aU)) 
                                                  - (IData)(0x10U))))),21);
    tracep->fullIData(oldp+276,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xcU)),32);
    tracep->fullIData(oldp+277,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xcU)),32);
    tracep->fullIData(oldp+278,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U]),32);
    tracep->fullIData(oldp+279,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U]),32);
    tracep->fullIData(oldp+280,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU] 
                                               << 0x11U) 
                                              | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                 >> 0xfU)))),21);
    tracep->fullBit(oldp+281,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                     >> 0x13U))));
    tracep->fullIData(oldp+282,((((8U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U], 0xcU))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U], 0xcU)))),32);
    tracep->fullIData(oldp+283,((((8U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U], 0xcU))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U], 0xcU)))),32);
    tracep->fullIData(oldp+284,((0x1fffffU & (((8U 
                                                & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU])
                                                ? 1U
                                                : 0U)
                                               ? ((IData)(0x10U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU] 
                                                    << 0x11U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                      >> 0xfU)))
                                               : ((
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU] 
                                                    << 0x11U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                      >> 0xfU)) 
                                                  - (IData)(0x10U))))),21);
    tracep->fullIData(oldp+285,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U], 0xcU)),32);
    tracep->fullIData(oldp+286,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U], 0xcU)),32);
    tracep->fullBit(oldp+287,(((8U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU])
                                ? 1U : 0U)));
    tracep->fullIData(oldp+288,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[7U]),32);
    tracep->fullIData(oldp+289,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[7U]),32);
    tracep->fullIData(oldp+290,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                               << 0xdU) 
                                              | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                                 >> 0x13U)))),21);
    tracep->fullBit(oldp+291,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                     >> 7U))));
    tracep->fullIData(oldp+292,((((0x80U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[7U] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[7U], 1U))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[7U] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[7U], 1U)))),32);
    tracep->fullIData(oldp+293,((((0x80U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[7U] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[7U], 1U))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[7U] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[7U], 1U)))),32);
    tracep->fullIData(oldp+294,((0x1fffffU & (((0x80U 
                                                & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                                                ? 1U
                                                : 0U)
                                               ? ((IData)(0x8c9fU) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                    << 0xdU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                                      >> 0x13U)))
                                               : ((
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                    << 0xdU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                                      >> 0x13U)) 
                                                  - (IData)(0x8c9fU))))),21);
    tracep->fullIData(oldp+295,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[7U], 1U)),32);
    tracep->fullIData(oldp+296,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[7U], 1U)),32);
    tracep->fullBit(oldp+297,(((0x80U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                                ? 1U : 0U)));
    tracep->fullIData(oldp+298,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[8U]),32);
    tracep->fullIData(oldp+299,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[8U]),32);
    tracep->fullIData(oldp+300,((0x1fffffU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                              >> 8U))),21);
    tracep->fullBit(oldp+301,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                     >> 8U))));
    tracep->fullIData(oldp+302,((((0x10000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[8U] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[8U], 2U))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[8U] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[8U], 2U)))),32);
    tracep->fullIData(oldp+303,((((0x10000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[8U] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[8U], 2U))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[8U] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[8U], 2U)))),32);
    tracep->fullIData(oldp+304,((0x1fffffU & (((0x10000000U 
                                                & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                                                ? 1U
                                                : 0U)
                                               ? ((IData)(0x4162U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                    << 0x18U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                      >> 8U)))
                                               : ((
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                    << 0x18U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                      >> 8U)) 
                                                  - (IData)(0x4162U))))),21);
    tracep->fullIData(oldp+305,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[8U], 2U)),32);
    tracep->fullIData(oldp+306,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[8U], 2U)),32);
    tracep->fullBit(oldp+307,(((0x10000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                                ? 1U : 0U)));
    tracep->fullIData(oldp+308,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[9U]),32);
    tracep->fullIData(oldp+309,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[9U]),32);
    tracep->fullIData(oldp+310,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                               << 3U) 
                                              | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                 >> 0x1dU)))),21);
    tracep->fullBit(oldp+311,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                     >> 9U))));
    tracep->fullIData(oldp+312,((((0x20000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[9U] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[9U], 3U))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[9U] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[9U], 3U)))),32);
    tracep->fullIData(oldp+313,((((0x20000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U])
                                   ? 1U : 0U) ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[9U] 
                                                 - 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[9U], 3U))
                                  : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[9U] 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[9U], 3U)))),32);
    tracep->fullIData(oldp+314,((0x1fffffU & (((0x20000U 
                                                & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U])
                                                ? 1U
                                                : 0U)
                                               ? ((IData)(0x202bU) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                                    << 3U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                      >> 0x1dU)))
                                               : ((
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                                    << 3U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                      >> 0x1dU)) 
                                                  - (IData)(0x202bU))))),21);
    tracep->fullIData(oldp+315,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[9U], 3U)),32);
    tracep->fullIData(oldp+316,(VL_SHIFTRS_III(32,32,32, 
                                               vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[9U], 3U)),32);
    tracep->fullBit(oldp+317,(((0x20000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U])
                                ? 1U : 0U)));
    tracep->fullBit(oldp+318,(vlSelf->clk_i));
    tracep->fullIData(oldp+319,(vlSelf->ang_i),21);
    tracep->fullBit(oldp+320,(vlSelf->ready_i));
    tracep->fullBit(oldp+321,(vlSelf->val_i));
    tracep->fullIData(oldp+322,(vlSelf->sinh_o),32);
    tracep->fullIData(oldp+323,(vlSelf->cosh_o),32);
    tracep->fullBit(oldp+324,(vlSelf->ready_o));
    tracep->fullBit(oldp+325,(vlSelf->val_o));
    tracep->fullBit(oldp+326,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__stall_pipe));
    tracep->fullIData(oldp+327,(6U),32);
    tracep->fullIData(oldp+328,(0xcU),32);
    tracep->fullIData(oldp+329,(1U),32);
    tracep->fullIData(oldp+330,(0x20U),32);
    tracep->fullIData(oldp+331,(0x15U),32);
    tracep->fullWData(oldp+332,(Vbsg_cordic_sine_cosine_hyperbolic__ConstPool__CONST_h154117da_0),399);
    tracep->fullIData(oldp+345,(0x57ce0293U),32);
    tracep->fullIData(oldp+346,(0U),32);
    tracep->fullIData(oldp+347,(0U),32);
    tracep->fullIData(oldp+348,(0x31e41U),21);
    tracep->fullIData(oldp+349,(0x2c548U),21);
    tracep->fullIData(oldp+350,(2U),32);
    tracep->fullIData(oldp+351,(0x26c0eU),21);
    tracep->fullIData(oldp+352,(3U),32);
    tracep->fullIData(oldp+353,(0x21252U),21);
    tracep->fullIData(oldp+354,(4U),32);
    tracep->fullIData(oldp+355,(0x1b78cU),21);
    tracep->fullIData(oldp+356,(5U),32);
    tracep->fullIData(oldp+357,(0x15aa1U),21);
    tracep->fullIData(oldp+358,(0xf913U),21);
    tracep->fullIData(oldp+359,(0xaU),32);
    tracep->fullIData(oldp+360,(0x1005U),21);
    tracep->fullIData(oldp+361,(0xbU),32);
    tracep->fullIData(oldp+362,(0x800U),21);
    tracep->fullIData(oldp+363,(0x400U),21);
    tracep->fullIData(oldp+364,(0xdU),32);
    tracep->fullIData(oldp+365,(0x200U),21);
    tracep->fullIData(oldp+366,(0xeU),32);
    tracep->fullIData(oldp+367,(0x100U),21);
    tracep->fullIData(oldp+368,(0xfU),32);
    tracep->fullIData(oldp+369,(0x80U),21);
    tracep->fullIData(oldp+370,(0x10U),32);
    tracep->fullIData(oldp+371,(0x40U),21);
    tracep->fullIData(oldp+372,(0x11U),32);
    tracep->fullIData(oldp+373,(0x20U),21);
    tracep->fullIData(oldp+374,(0x12U),32);
    tracep->fullIData(oldp+375,(0x10U),21);
    tracep->fullIData(oldp+376,(7U),32);
    tracep->fullIData(oldp+377,(0x8c9fU),21);
    tracep->fullIData(oldp+378,(8U),32);
    tracep->fullIData(oldp+379,(0x4162U),21);
    tracep->fullIData(oldp+380,(9U),32);
    tracep->fullIData(oldp+381,(0x202bU),21);
}
