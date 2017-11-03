#include "convolve_kernel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void convolve_kernel::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"bufw_Addr_A\" :  \"" << bufw_Addr_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bufw_EN_A\" :  \"" << bufw_EN_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bufw_WEN_A\" :  \"" << bufw_WEN_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bufw_Din_A\" :  \"" << bufw_Din_A.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"bufw_Dout_A\" :  \"" << bufw_Dout_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bufw_Clk_A\" :  \"" << bufw_Clk_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bufw_Rst_A\" :  \"" << bufw_Rst_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bufi_Addr_A\" :  \"" << bufi_Addr_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bufi_EN_A\" :  \"" << bufi_EN_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bufi_WEN_A\" :  \"" << bufi_WEN_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bufi_Din_A\" :  \"" << bufi_Din_A.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"bufi_Dout_A\" :  \"" << bufi_Dout_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bufi_Clk_A\" :  \"" << bufi_Clk_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bufi_Rst_A\" :  \"" << bufi_Rst_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bufo_Addr_A\" :  \"" << bufo_Addr_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bufo_EN_A\" :  \"" << bufo_EN_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bufo_WEN_A\" :  \"" << bufo_WEN_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bufo_Din_A\" :  \"" << bufo_Din_A.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"bufo_Dout_A\" :  \"" << bufo_Dout_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bufo_Clk_A\" :  \"" << bufo_Clk_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bufo_Rst_A\" :  \"" << bufo_Rst_A.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_AWVALID\" :  \"" << s_axi_control_AWVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_AWREADY\" :  \"" << s_axi_control_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_AWADDR\" :  \"" << s_axi_control_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_WVALID\" :  \"" << s_axi_control_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_WREADY\" :  \"" << s_axi_control_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_WDATA\" :  \"" << s_axi_control_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_WSTRB\" :  \"" << s_axi_control_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_ARVALID\" :  \"" << s_axi_control_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_ARREADY\" :  \"" << s_axi_control_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_ARADDR\" :  \"" << s_axi_control_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_RVALID\" :  \"" << s_axi_control_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_RREADY\" :  \"" << s_axi_control_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_RDATA\" :  \"" << s_axi_control_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_RRESP\" :  \"" << s_axi_control_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_BVALID\" :  \"" << s_axi_control_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_BREADY\" :  \"" << s_axi_control_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_BRESP\" :  \"" << s_axi_control_BRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"interrupt\" :  \"" << interrupt.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

