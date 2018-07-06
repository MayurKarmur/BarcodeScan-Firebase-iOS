




#import <UIKit/UIKit.h>
#import "RMScannerView.h"


@interface BarCodeScanVC : UIViewController<RMScannerViewDelegate>

@property (weak, nonatomic) IBOutlet RMScannerView *scannerView;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *scanBtnOutlet;
- (IBAction)btnScanListAction:(UIButton *)sender;

@end
