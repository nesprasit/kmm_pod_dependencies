// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "shared",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "shared",
            targets: ["shared"]
        ),
        .library(
            name: "socket_pod_dependency",
            targets: ["socket_pod_dependency"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "shared",
            path: "./shared.xcframework"
        ),
        .binaryTarget(
            name: "socket_pod_dependency",
            path: "./socket_pod_dependency.xcframework"
        ),
    ]
)
